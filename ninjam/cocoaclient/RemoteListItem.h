/*
    NINJAM Cocoa Client - RemoteListItem.h
    Copyright (C) 2005 Cockos Incorporated

    NINJAM is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    NINJAM is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with NINJAM; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/

/* RemoteListItem */

#import <Cocoa/Cocoa.h>
@class VUMeter;
@interface RemoteListItem : NSView
{
  int m_user;
  int m_ch;
  int m_ypos;
  NSTextField *username;
  NSTextField *channelname;
  NSButton *recvtog;
  VUMeter *vumeter;
  
  NSSlider *volslider;
  NSSlider *panslider;
  NSTextField *volinfo;
  NSButton *mute;
  NSButton *solo;  
}
- (void)onAction:(id)sender;
- (id)initWithPos:(int)ypos;
- (void)updateWithUser:(int)user withChannel:(int)ch;
- (int)tag; // returns channel_index + 1024
- (void)runVUmeter;
- (void)updateVolInfo:(float)vol Pan:(float)pan;
@end
