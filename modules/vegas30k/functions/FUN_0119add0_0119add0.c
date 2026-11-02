/* Module: vegas30k.dll
   Function: FUN_0119add0
   Address: 0119add0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0119add0(int *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  if ((*(byte *)(param_1 + 8) & 0x10) != 0) {
    iVar1 = (**(code **)(*param_1 + 0x170))(0);
    if (-1 < iVar1) {
      uVar2 = 0;
      if (*(short *)((int)param_1 + 0x4fa) != 0) {
        piVar3 = param_1 + 0x103;
        do {
          uVar2 = uVar2 + 1;
          *piVar3 = 0;
          piVar3[1] = 0;
          piVar3[2] = 0;
          piVar3 = piVar3 + 3;
        } while (uVar2 < *(ushort *)((int)param_1 + 0x4fa));
      }
      param_1[0x1b] = 0;
    }
    return iVar1;
  }
  return -0x7fff0001;
}


