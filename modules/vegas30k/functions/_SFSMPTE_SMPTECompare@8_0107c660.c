/* Module: vegas30k.dll
   Function: _SFSMPTE_SMPTECompare@8
   Address: 0107c660
   Source: Ghidra pseudocode (Stage 10 batch) */


int _SFSMPTE_SMPTECompare_8(int param_1,int param_2)

{
                    /* 0x7c660  708  _SFSMPTE_SMPTECompare@8 */
  if (*(uint *)(param_2 + 4) < *(uint *)(param_1 + 4)) {
    return 1;
  }
  if (*(uint *)(param_1 + 4) < *(uint *)(param_2 + 4)) {
    return -1;
  }
  if (*(uint *)(param_2 + 8) < *(uint *)(param_1 + 8)) {
    return 1;
  }
  if (*(uint *)(param_1 + 8) < *(uint *)(param_2 + 8)) {
    return -1;
  }
  if (*(uint *)(param_2 + 0xc) < *(uint *)(param_1 + 0xc)) {
    return 1;
  }
  if (*(uint *)(param_1 + 0xc) < *(uint *)(param_2 + 0xc)) {
    return -1;
  }
  if (*(uint *)(param_2 + 0x10) < *(uint *)(param_1 + 0x10)) {
    return 1;
  }
  return -(uint)(*(uint *)(param_1 + 0x10) < *(uint *)(param_2 + 0x10));
}


