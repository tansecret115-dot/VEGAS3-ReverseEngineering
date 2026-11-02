/* Module: pngu3266.dll
   Function: ToolTipsEnabled
   Address: 6060460a
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static int __cdecl CPNTipManager::ToolTipsEnabled(void) */

int __cdecl CPNTipManager::ToolTipsEnabled(void)

{
                    /* 0x1460a  2088  ?ToolTipsEnabled@CPNTipManager@@SAHXZ */
  return m_tipsEnabled;
}


