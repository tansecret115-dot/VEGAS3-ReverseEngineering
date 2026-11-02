/* Module: vidcap30.exe
   Function: FUN_00430e10
   Address: 00430e10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00430e10(undefined4 *param_1,int param_2,byte param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int *piVar4;
  
  uVar3 = 0;
  if (param_1[0x2b] != 0) {
    piVar4 = param_1 + 0x31;
    do {
      if (*piVar4 == param_2) {
        bVar1 = *(byte *)(uVar3 * 0x20 + 0xca + (int)param_1);
        bVar2 = bVar1 & 2 | param_3 & 0xfd;
        if (bVar1 == bVar2) {
          return 0;
        }
        *(byte *)((int)param_1 + uVar3 * 0x20 + 0xca) = bVar2;
        InvalidateRect((HWND)*param_1,(RECT *)(param_1 + uVar3 * 8 + 0x2d),0);
        return 1;
      }
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 8;
    } while (uVar3 < (uint)param_1[0x2b]);
  }
  return 0;
}


