/* Module: pngu3266.dll
   Function: GetAppWorkspaceColor
   Address: 6060a142
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static class CPNColor & __cdecl CPNDrawHelper::GetAppWorkspaceColor(void) */

CPNColor * __cdecl CPNDrawHelper::GetAppWorkspaceColor(void)

{
                    /* 0x1a142  1087  ?GetAppWorkspaceColor@CPNDrawHelper@@SAAAVCPNColor@@XZ */
  return &m_appWorkspaceColor;
}


