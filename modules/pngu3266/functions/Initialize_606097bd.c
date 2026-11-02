/* Module: pngu3266.dll
   Function: Initialize
   Address: 606097bd
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static void __cdecl CPNDrawHelper::Initialize(void) */

void __cdecl CPNDrawHelper::Initialize(void)

{
  int iVar1;
  undefined4 local_158 [6];
  LOGFONTA local_140 [2];
  LOGFONTA local_b8 [2];
  LOGFONTA local_40;
  
                    /* 0x197bd  1467  ?Initialize@CPNDrawHelper@@SAXXZ */
  CPNGraphicResource::LockResource((CPNGraphicResource *)&m_windowPen);
  CPNGraphicResource::LockResource((CPNGraphicResource *)&m_menuTextPen);
  CPNGraphicResource::LockResource((CPNGraphicResource *)&m_btnTextPen);
  CPNGraphicResource::LockResource((CPNGraphicResource *)&m_captionTextPen);
  CPNGraphicResource::LockResource((CPNGraphicResource *)&m_windowTextPen);
  CPNGraphicResource::LockResource((CPNGraphicResource *)&m_highlightPen);
  CPNGraphicResource::LockResource((CPNGraphicResource *)&m_windowFramePen);
  CPNGraphicResource::LockResource((CPNGraphicResource *)&m_btnShadowPen);
  CPNGraphicResource::LockResource((CPNGraphicResource *)&m_btnHighlightPen);
  CPNGraphicResource::LockResource((CPNGraphicResource *)&m_3dDkShadowPen);
  CPNGraphicResource::LockResource((CPNGraphicResource *)&m_btnFacePen);
  CPNGraphicResource::LockResource((CPNGraphicResource *)&m_grayTextPen);
  CPNGraphicResource::LockResource((CPNGraphicResource *)&m_3dFacePen);
  CPNGraphicResource::LockResource((CPNGraphicResource *)&m_3dShadowPen);
  CPNGraphicResource::LockResource((CPNGraphicResource *)&m_3dHighlightPen);
  CPNGraphicResource::LockResource((CPNGraphicResource *)&m_blackPen);
  CPNGraphicResource::LockResource((CPNGraphicResource *)&m_whitePen);
  CPNGraphicResource::LockResource((CPNGraphicResource *)&m_windowBrush);
  CPNGraphicResource::LockResource((CPNGraphicResource *)&m_btnFaceBrush);
  CPNGraphicResource::LockResource((CPNGraphicResource *)&m_btnTextBrush);
  CPNGraphicResource::LockResource((CPNGraphicResource *)&m_highlightBrush);
  CPNGraphicResource::LockResource((CPNGraphicResource *)&m_grayTextBrush);
  CPNGraphicResource::LockResource((CPNGraphicResource *)&m_3dFaceBrush);
  CPNGraphicResource::LockResource((CPNGraphicResource *)&m_3dShadowBrush);
  CPNGraphicResource::LockResource((CPNGraphicResource *)&m_3dHighlightBrush);
  CPNGraphicResource::LockResource((CPNGraphicResource *)&m_infoBkBrush);
  CPNGraphicResource::LockResource((CPNGraphicResource *)&m_blackBrush);
  CPNGraphicResource::LockResource((CPNGraphicResource *)&m_whiteBrush);
  CPNGraphicResource::LockResource((CPNGraphicResource *)&m_menuBrush);
  CPNGraphicResource::LockResource((CPNGraphicResource *)&m_inactiveCaptionBrush);
  CPNGraphicResource::LockResource((CPNGraphicResource *)&m_activeCaptionBrush);
  CPNGraphicResource::LockResource((CPNGraphicResource *)&m_gradientActiveCaptionBrush);
  CPNGraphicResource::LockResource((CPNGraphicResource *)&m_gradientInactiveCaptionBrush);
  local_158[0] = 0x154;
  SystemParametersInfoA(0x29,0,local_158,0);
  iVar1 = _getmbcp();
  if (iVar1 != 0) {
    strcpy(m_szControlsFontName,local_40.lfFaceName);
    m_nControlsFontSize = (local_40.lfHeight * 0x48) / 0x60;
  }
  tooltipfont = CreateFontIndirectA(&local_40);
  CPNFont::Attach(&m_tooltipFont,tooltipfont);
  captionfont = CreateFontIndirectA(local_140);
  CPNFont::Attach(&m_captionFont,captionfont);
  menufont = CreateFontIndirectA(local_b8);
  CPNFont::Attach(&m_menuFont,menufont);
  CPNFont::Create(&m_controlsFont,m_nControlsFontSize,0xd,0x12,0x12,m_szControlsFontName,0);
  CPNFont::Create(&m_tabControlFont,m_nControlsFontSize,0xd,0x12,0x12,m_szControlsFontName,0);
  CPNGraphicResource::LockResource((CPNGraphicResource *)&m_controlsFont);
  CPNGraphicResource::LockResource((CPNGraphicResource *)&m_tooltipFont);
  CPNGraphicResource::LockResource((CPNGraphicResource *)&m_tabControlFont);
  CPNGraphicResource::LockResource((CPNGraphicResource *)&m_captionFont);
  CPNGraphicResource::LockResource((CPNGraphicResource *)&m_menuFont);
  return;
}


