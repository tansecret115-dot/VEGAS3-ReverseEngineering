/* Module: pncrt.dll
   Function: FUN_7801f400
   Address: 7801f400
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_7801f400(uint param_1,int param_2)

{
  byte bVar1;
  int *piVar2;
  byte bVar3;
  
  bVar1 = *(byte *)((&__pioinfo)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24);
  if (param_2 == 0x8000) {
    bVar3 = bVar1 & 0x7f;
  }
  else {
    if (param_2 != 0x4000) {
      piVar2 = _errno();
      *piVar2 = 0x16;
      return -1;
    }
    bVar3 = bVar1 | 0x80;
  }
  *(byte *)((&__pioinfo)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) = bVar3;
  return (-(uint)((bVar1 & 0x80) != 0) & 0xffffc000) + 0x8000;
}


