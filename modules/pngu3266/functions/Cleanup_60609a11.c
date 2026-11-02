/* Module: pngu3266.dll
   Function: Cleanup
   Address: 60609a11
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static void __cdecl CPNDrawHelper::Cleanup(void) */

void __cdecl CPNDrawHelper::Cleanup(void)

{
                    /* 0x19a11  849  ?Cleanup@CPNDrawHelper@@SAXXZ */
  CPNGraphicResource::UnLockResource((CPNGraphicResource *)&m_windowPen);
  CPNGraphicResource::UnLockResource((CPNGraphicResource *)&m_menuTextPen);
  CPNGraphicResource::UnLockResource((CPNGraphicResource *)&m_btnTextPen);
  CPNGraphicResource::UnLockResource((CPNGraphicResource *)&m_captionTextPen);
  CPNGraphicResource::UnLockResource((CPNGraphicResource *)&m_windowTextPen);
  CPNGraphicResource::UnLockResource((CPNGraphicResource *)&m_highlightPen);
  CPNGraphicResource::UnLockResource((CPNGraphicResource *)&m_windowFramePen);
  CPNGraphicResource::UnLockResource((CPNGraphicResource *)&m_btnShadowPen);
  CPNGraphicResource::UnLockResource((CPNGraphicResource *)&m_btnHighlightPen);
  CPNGraphicResource::UnLockResource((CPNGraphicResource *)&m_3dDkShadowPen);
  CPNGraphicResource::UnLockResource((CPNGraphicResource *)&m_btnFacePen);
  CPNGraphicResource::UnLockResource((CPNGraphicResource *)&m_grayTextPen);
  CPNGraphicResource::UnLockResource((CPNGraphicResource *)&m_3dFacePen);
  CPNGraphicResource::UnLockResource((CPNGraphicResource *)&m_3dShadowPen);
  CPNGraphicResource::UnLockResource((CPNGraphicResource *)&m_3dHighlightPen);
  CPNGraphicResource::UnLockResource((CPNGraphicResource *)&m_blackPen);
  CPNGraphicResource::UnLockResource((CPNGraphicResource *)&m_whitePen);
  CPNGraphicResource::UnLockResource((CPNGraphicResource *)&m_windowBrush);
  CPNGraphicResource::UnLockResource((CPNGraphicResource *)&m_btnFaceBrush);
  CPNGraphicResource::UnLockResource((CPNGraphicResource *)&m_btnTextBrush);
  CPNGraphicResource::UnLockResource((CPNGraphicResource *)&m_highlightBrush);
  CPNGraphicResource::UnLockResource((CPNGraphicResource *)&m_grayTextBrush);
  CPNGraphicResource::UnLockResource((CPNGraphicResource *)&m_3dFaceBrush);
  CPNGraphicResource::UnLockResource((CPNGraphicResource *)&m_3dShadowBrush);
  CPNGraphicResource::UnLockResource((CPNGraphicResource *)&m_3dHighlightBrush);
  CPNGraphicResource::UnLockResource((CPNGraphicResource *)&m_infoBkBrush);
  CPNGraphicResource::UnLockResource((CPNGraphicResource *)&m_blackBrush);
  CPNGraphicResource::UnLockResource((CPNGraphicResource *)&m_whiteBrush);
  CPNGraphicResource::UnLockResource((CPNGraphicResource *)&m_menuBrush);
  CPNGraphicResource::UnLockResource((CPNGraphicResource *)&m_inactiveCaptionBrush);
  CPNGraphicResource::UnLockResource((CPNGraphicResource *)&m_activeCaptionBrush);
  CPNGraphicResource::UnLockResource((CPNGraphicResource *)&m_gradientActiveCaptionBrush);
  CPNGraphicResource::UnLockResource((CPNGraphicResource *)&m_gradientInactiveCaptionBrush);
  CPNGraphicResource::UnLockResource((CPNGraphicResource *)&m_controlsFont);
  CPNGraphicResource::UnLockResource((CPNGraphicResource *)&m_tooltipFont);
  CPNGraphicResource::UnLockResource((CPNGraphicResource *)&m_tabControlFont);
  CPNGraphicResource::UnLockResource((CPNGraphicResource *)&m_captionFont);
  CPNGraphicResource::UnLockResource((CPNGraphicResource *)&m_menuFont);
  CPNFont::Detach(&m_tooltipFont);
  if (tooltipfont != (HFONT__ *)0x0) {
    DeleteObject(tooltipfont);
  }
  tooltipfont = (HFONT__ *)0x0;
  CPNFont::Detach(&m_captionFont);
  if (captionfont != (HFONT__ *)0x0) {
    DeleteObject(captionfont);
  }
  captionfont = (HFONT__ *)0x0;
  CPNFont::Detach(&m_menuFont);
  if (menufont != (HFONT__ *)0x0) {
    DeleteObject(menufont);
  }
  menufont = (HFONT__ *)0x0;
  return;
}


