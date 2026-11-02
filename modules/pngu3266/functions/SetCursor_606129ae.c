/* Module: pngu3266.dll
   Function: SetCursor
   Address: 606129ae
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static class CPNCursor * __cdecl CPNSystemInfo::SetCursor(class CPNCursor &) */

CPNCursor * __cdecl CPNSystemInfo::SetCursor(CPNCursor *param_1)

{
                    /* 0x229ae  1883  ?SetCursor@CPNSystemInfo@@SAPAVCPNCursor@@AAV2@@Z */
  _DAT_6064b158 = ::SetCursor(*(HCURSOR *)(param_1 + 8));
  return &m_oldCursor;
}


