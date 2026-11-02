/* Module: pngu3266.dll
   Function: Update
   Address: 60609bee
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static void __cdecl CPNDrawHelper::Update(void) */

void __cdecl CPNDrawHelper::Update(void)

{
                    /* 0x19bee  2105  ?Update@CPNDrawHelper@@SAXXZ */
  Cleanup();
  CPNColor::SetToSystemColor(&m_scrollbarColor,0);
  CPNColor::SetToSystemColor(&m_backgroundColor,1);
  CPNColor::SetToSystemColor(&m_activeCaptionColor,2);
  CPNColor::SetToSystemColor(&m_inactiveCaptionColor,3);
  CPNColor::SetToSystemColor(&m_menuColor,4);
  CPNColor::SetToSystemColor(&m_windowColor,5);
  CPNColor::SetToSystemColor(&m_windowFrameColor,6);
  CPNColor::SetToSystemColor(&m_menuTextColor,7);
  CPNColor::SetToSystemColor(&m_windowTextColor,8);
  CPNColor::SetToSystemColor(&m_inactiveBorderColor,0xb);
  CPNColor::SetToSystemColor(&m_appWorkspaceColor,0xc);
  CPNColor::SetToSystemColor(&m_highlightColor,0xd);
  CPNColor::SetToSystemColor(&m_captionTextColor,9);
  CPNColor::SetToSystemColor(&m_highlightTextColor,0xe);
  CPNColor::SetToSystemColor(&m_btnFaceColor,0xf);
  CPNColor::SetToSystemColor(&m_btnShadowColor,0x10);
  CPNColor::SetToSystemColor(&m_grayTextColor,0x11);
  CPNColor::SetToSystemColor(&m_btnTextColor,0x12);
  CPNColor::SetToSystemColor(&m_inactiveCaptionTextColor,0x13);
  CPNColor::SetToSystemColor(&m_btnHighlightColor,0x14);
  CPNColor::SetToSystemColor(&m_3dDkShadowColor,0x15);
  CPNColor::SetToSystemColor(&m_3dLightColor,0x16);
  CPNColor::SetToSystemColor(&m_infoTextColor,0x17);
  CPNColor::SetToSystemColor(&m_infoBkColor,0x18);
  CPNColor::SetToSystemColor(&m_3dFaceColor,0xf);
  CPNColor::SetToSystemColor(&m_3dShadowColor,0x10);
  CPNColor::SetToSystemColor(&m_3dHighlightColor,0x14);
  CPNColor::SetToSystemColor(&m_gradientActiveCaptionColor,0x19);
  CPNColor::SetToSystemColor(&m_gradientInactiveCaptionColor,0x1a);
  CPNColor::Set(&m_blackColor,'\0','\0','\0');
  CPNColor::Set(&m_whiteColor,0xff,0xff,0xff);
  CPNPen::SetColor(&m_windowPen,&m_windowColor);
  CPNPen::SetColor(&m_menuTextPen,&m_menuTextColor);
  CPNPen::SetColor(&m_btnTextPen,&m_btnTextColor);
  CPNPen::SetColor(&m_captionTextPen,&m_captionTextColor);
  CPNPen::SetColor(&m_windowTextPen,&m_windowTextColor);
  CPNPen::SetColor(&m_highlightPen,&m_highlightColor);
  CPNPen::SetColor(&m_windowFramePen,&m_windowFrameColor);
  CPNPen::SetColor(&m_btnShadowPen,&m_btnShadowColor);
  CPNPen::SetColor(&m_btnHighlightPen,&m_btnHighlightColor);
  CPNPen::SetColor(&m_3dDkShadowPen,&m_3dDkShadowColor);
  CPNPen::SetColor(&m_btnFacePen,&m_btnFaceColor);
  CPNPen::SetColor(&m_grayTextPen,&m_grayTextColor);
  CPNPen::SetColor(&m_3dFacePen,&m_3dFaceColor);
  CPNPen::SetColor(&m_3dShadowPen,&m_3dShadowColor);
  CPNPen::SetColor(&m_3dHighlightPen,&m_3dHighlightColor);
  CPNPen::SetColor(&m_blackPen,&m_blackColor);
  CPNPen::SetColor(&m_whitePen,&m_whiteColor);
  CPNBrush::SetColor(&m_windowBrush,&m_windowColor);
  CPNBrush::SetColor(&m_btnFaceBrush,&m_btnFaceColor);
  CPNBrush::SetColor(&m_btnTextBrush,&m_btnTextColor);
  CPNBrush::SetColor(&m_highlightBrush,&m_highlightColor);
  CPNBrush::SetColor(&m_grayTextBrush,&m_grayTextColor);
  CPNBrush::SetColor(&m_3dFaceBrush,&m_3dFaceColor);
  CPNBrush::SetColor(&m_3dShadowBrush,&m_3dShadowColor);
  CPNBrush::SetColor(&m_3dHighlightBrush,&m_3dHighlightColor);
  CPNBrush::SetColor(&m_infoBkBrush,&m_infoBkColor);
  CPNBrush::SetColor(&m_blackBrush,&m_blackColor);
  CPNBrush::SetColor(&m_menuBrush,&m_menuColor);
  CPNBrush::SetColor(&m_whiteBrush,&m_whiteColor);
  CPNBrush::SetColor(&m_inactiveCaptionBrush,&m_inactiveCaptionColor);
  CPNBrush::SetColor(&m_activeCaptionBrush,&m_activeCaptionColor);
  CPNBrush::SetColor(&m_gradientActiveCaptionBrush,&m_gradientActiveCaptionColor);
  CPNBrush::SetColor(&m_gradientInactiveCaptionBrush,&m_gradientInactiveCaptionColor);
  Initialize();
  return;
}


