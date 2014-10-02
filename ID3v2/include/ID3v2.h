/*******************************************************************************
 * Copyright (c) 2014, Jean-David Gadina - www.xs-labs.com / www.digidna.net
 * Distributed under the Boost Software License, Version 1.0.
 * 
 * Boost Software License - Version 1.0 - August 17th, 2003
 * 
 * Permission is hereby granted, free of charge, to any person or organization
 * obtaining a copy of the software and accompanying documentation covered by
 * this license (the "Software") to use, reproduce, display, distribute,
 * execute, and transmit the Software, and to prepare derivative works of the
 * Software, and to permit third-parties to whom the Software is furnished to
 * do so, all subject to the following:
 * 
 * The copyright notices in the Software and this entire statement, including
 * the above license grant, this restriction and the following disclaimer,
 * must be included in all copies of the Software, in whole or in part, and
 * all derivative works of the Software, unless such copies or derivative
 * works are solely in the form of machine-executable object code generated by
 * a source language processor.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT
 * SHALL THE COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE
 * FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN CONTRACT, TORT OR OTHERWISE,
 * ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 ******************************************************************************/
 
/* $Id$ */

/*!
 * @header      ID3v2.h
 * @copyright   (c) 2014 - Jean-David Gadina - www.xs-labs.com / www.digidna.net
 * @abstract    ID3v2 main header file
 */

#ifndef __ID3V2__
#define __ID3V2__

#include <string>
#include <iostream>
#include <vector>

#include <ID3v2/ID3v2-Version.h>
#include <ID3v2/ID3v2-AbstractFrame.h>
#include <ID3v2/ID3v2-ExtendedHeader.h>
#include <ID3v2/ID3v2-Tag.h>

#include <ID3v2/Frame/ID3v2-Frame-Unknown.h>

#include <ID3v2/Frame/v23/ID3v2-Frame-AENC.h>
#include <ID3v2/Frame/v23/ID3v2-Frame-APIC.h>
#include <ID3v2/Frame/v23/ID3v2-Frame-COMM.h>
#include <ID3v2/Frame/v23/ID3v2-Frame-COMR.h>
#include <ID3v2/Frame/v23/ID3v2-Frame-ENCR.h>
#include <ID3v2/Frame/v23/ID3v2-Frame-EQUA.h>
#include <ID3v2/Frame/v23/ID3v2-Frame-ETCO.h>
#include <ID3v2/Frame/v23/ID3v2-Frame-GEOB.h>
#include <ID3v2/Frame/v23/ID3v2-Frame-GRID.h>
#include <ID3v2/Frame/v23/ID3v2-Frame-IPLS.h>
#include <ID3v2/Frame/v23/ID3v2-Frame-LINK.h>
#include <ID3v2/Frame/v23/ID3v2-Frame-MCDI.h>
#include <ID3v2/Frame/v23/ID3v2-Frame-MLLT.h>
#include <ID3v2/Frame/v23/ID3v2-Frame-OWNE.h>
#include <ID3v2/Frame/v23/ID3v2-Frame-PCNT.h>
#include <ID3v2/Frame/v23/ID3v2-Frame-POPM.h>
#include <ID3v2/Frame/v23/ID3v2-Frame-POSS.h>
#include <ID3v2/Frame/v23/ID3v2-Frame-PRIV.h>
#include <ID3v2/Frame/v23/ID3v2-Frame-RBUF.h>
#include <ID3v2/Frame/v23/ID3v2-Frame-RVAD.h>
#include <ID3v2/Frame/v23/ID3v2-Frame-RVRB.h>
#include <ID3v2/Frame/v23/ID3v2-Frame-SYLT.h>
#include <ID3v2/Frame/v23/ID3v2-Frame-SYTC.h>
#include <ID3v2/Frame/v23/ID3v2-Frame-TALB.h>
#include <ID3v2/Frame/v23/ID3v2-Frame-TBPM.h>
#include <ID3v2/Frame/v23/ID3v2-Frame-TCOM.h>
#include <ID3v2/Frame/v23/ID3v2-Frame-TCON.h>
#include <ID3v2/Frame/v23/ID3v2-Frame-TCOP.h>
#include <ID3v2/Frame/v23/ID3v2-Frame-TDAT.h>
#include <ID3v2/Frame/v23/ID3v2-Frame-TDLY.h>
#include <ID3v2/Frame/v23/ID3v2-Frame-TENC.h>
#include <ID3v2/Frame/v23/ID3v2-Frame-TEXT.h>
#include <ID3v2/Frame/v23/ID3v2-Frame-TFLT.h>
#include <ID3v2/Frame/v23/ID3v2-Frame-TIME.h>
#include <ID3v2/Frame/v23/ID3v2-Frame-TIT1.h>
#include <ID3v2/Frame/v23/ID3v2-Frame-TIT2.h>
#include <ID3v2/Frame/v23/ID3v2-Frame-TIT3.h>
#include <ID3v2/Frame/v23/ID3v2-Frame-TKEY.h>
#include <ID3v2/Frame/v23/ID3v2-Frame-TLAN.h>
#include <ID3v2/Frame/v23/ID3v2-Frame-TLEN.h>
#include <ID3v2/Frame/v23/ID3v2-Frame-TMED.h>
#include <ID3v2/Frame/v23/ID3v2-Frame-TOAL.h>
#include <ID3v2/Frame/v23/ID3v2-Frame-TOFN.h>
#include <ID3v2/Frame/v23/ID3v2-Frame-TOLY.h>
#include <ID3v2/Frame/v23/ID3v2-Frame-TOPE.h>
#include <ID3v2/Frame/v23/ID3v2-Frame-TORY.h>
#include <ID3v2/Frame/v23/ID3v2-Frame-TOWN.h>
#include <ID3v2/Frame/v23/ID3v2-Frame-TPE1.h>
#include <ID3v2/Frame/v23/ID3v2-Frame-TPE2.h>
#include <ID3v2/Frame/v23/ID3v2-Frame-TPE3.h>
#include <ID3v2/Frame/v23/ID3v2-Frame-TPE4.h>
#include <ID3v2/Frame/v23/ID3v2-Frame-TPOS.h>
#include <ID3v2/Frame/v23/ID3v2-Frame-TPUB.h>
#include <ID3v2/Frame/v23/ID3v2-Frame-TRCK.h>
#include <ID3v2/Frame/v23/ID3v2-Frame-TRDA.h>
#include <ID3v2/Frame/v23/ID3v2-Frame-TRSN.h>
#include <ID3v2/Frame/v23/ID3v2-Frame-TRSO.h>
#include <ID3v2/Frame/v23/ID3v2-Frame-TSIZ.h>
#include <ID3v2/Frame/v23/ID3v2-Frame-TSRC.h>
#include <ID3v2/Frame/v23/ID3v2-Frame-TSSE.h>
#include <ID3v2/Frame/v23/ID3v2-Frame-TXXX.h>
#include <ID3v2/Frame/v23/ID3v2-Frame-TYER.h>
#include <ID3v2/Frame/v23/ID3v2-Frame-UFID.h>
#include <ID3v2/Frame/v23/ID3v2-Frame-USER.h>
#include <ID3v2/Frame/v23/ID3v2-Frame-USLT.h>
#include <ID3v2/Frame/v23/ID3v2-Frame-WCOM.h>
#include <ID3v2/Frame/v23/ID3v2-Frame-WCOP.h>
#include <ID3v2/Frame/v23/ID3v2-Frame-WOAF.h>
#include <ID3v2/Frame/v23/ID3v2-Frame-WOAR.h>
#include <ID3v2/Frame/v23/ID3v2-Frame-WOAS.h>
#include <ID3v2/Frame/v23/ID3v2-Frame-WORS.h>
#include <ID3v2/Frame/v23/ID3v2-Frame-WPAY.h>
#include <ID3v2/Frame/v23/ID3v2-Frame-WPUB.h>
#include <ID3v2/Frame/v23/ID3v2-Frame-WXXX.h>

#endif /* __ID3V2__ */
