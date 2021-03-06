/*
	VitaShell
	Copyright (C) 2015-2016, TheFloW

	This program is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef __THEME_H__
#define __THEME_H__

#define MAX_WALLPAPERS 10

// Shell colors
extern int BACKGROUND_COLOR;
extern int TITLE_COLOR;
extern int PATH_COLOR;
extern int DATE_TIME_COLOR;

// File browser colors
extern int FOCUS_COLOR;
extern int FILE_COLOR;
extern int SFO_COLOR;
extern int TXT_COLOR;
extern int FOLDER_COLOR;
extern int IMAGE_COLOR;
extern int ARCHIVE_COLOR;
extern int SCROLL_BAR_COLOR;
extern int SCROLL_BAR_BG_COLOR;
extern int MARKED_COLOR;

// Context menu colors
extern int CONTEXT_MENU_TEXT_COLOR;
extern int CONTEXT_MENU_FOCUS_COLOR;
extern int CONTEXT_MENU_COLOR;
extern int CONTEXT_MENU_MORE_COLOR;
extern int INVISIBLE_COLOR;

// Dialog colors
extern int DIALOG_COLOR;
extern int DIALOG_BG_COLOR;
extern int PROGRESS_BAR_COLOR;
extern int PROGRESS_BAR_BG_COLOR;

// Hex editor colors
extern int HEX_COLOR;
extern int HEX_OFFSET_COLOR;
extern int HEX_NIBBLE_COLOR;

// Text editor colors
extern int TEXT_COLOR;
extern int TEXT_FOCUS_COLOR;
extern int TEXT_LINE_NUMBER_COLOR;
extern int TEXT_LINE_NUMBER_COLOR_FOCUS;
extern int TEXT_HIGHLIGHT_COLOR;

// Photo viewer colors
extern int PHOTO_ZOOM_COLOR;

// Audio player colors
extern int AUDIO_INFO_ASSIGN;
extern int AUDIO_INFO;
extern int AUDIO_SPEED;
extern int AUDIO_TIME_CURRENT;
extern int AUDIO_TIME_SLASH;
extern int AUDIO_TIME_TOTAL;
extern int AUDIO_TIME_BAR;
extern int AUDIO_TIME_BAR_BG;

//UI2 colors
extern int ITEM_BORDER;
extern int ITEM_BORDER_SELECT;
extern int BACKGROUND_COLOR_TEXT_ITEM;
extern int ALPHA_TITLEBAR;


extern vita2d_texture *default_wallpaper, *game_card_storage_image, *game_card_image, *memory_card_image,
					  *run_file_image, *img_file_image, *unknown_file_image, *sa0_image, *ur0_image, *vd0_image, 
					  *vs0_image, *savedata0_image, *pd0_image, *folder_image, *app0_image, *ud0_image, *mark_image,
					  *music_image, *os0_image, *zip_file_image, *txt_file_image, *title_bar_bg_image, *updir_image ;


extern vita2d_texture *folder_icon, *file_icon, *archive_icon, *image_icon, *audio_icon, *sfo_icon, *text_icon,
					  *wifi_image, *ftp_image, *dialog_image, *context_image, *context_more_image, *battery_image, *battery_bar_red_image,
					  *battery_bar_green_image, *battery_bar_charge_image, *bg_browser_image, *bg_hex_image, *bg_text_image,
					  *bg_photo_image, *bg_audio_image, *cover_image, *play_image, *pause_image, *fastforward_image, *fastrewind_image;

extern vita2d_texture *wallpaper_image[MAX_WALLPAPERS];
extern vita2d_texture *previous_wallpaper_image, *current_wallpaper_image;

extern int wallpaper_count;

void loadTheme();

#endif
