/* Module: vegas30.exe
   Function: FUN_005944a0
   Address: 005944a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005944a0(float *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (*(uint *)(param_3 + 4) / 0x96) * (uint)*(ushort *)(param_3 + 2);
  if ((int)*(uint *)(param_3 + 4) / 3 < param_2 + param_4) {
    param_2 = *(uint *)(param_3 + 4) / 3 - param_4;
  }
  iVar2 = 0;
  if (0 < (int)((uint)*(ushort *)(param_3 + 2) * param_2)) {
    do {
      iVar1 = iVar2 + param_4;
      iVar2 = iVar2 + 1;
      *param_1 = ((float)(iVar1 % iVar3) / (float)iVar3) * (float)_DAT_00610800 - _DAT_0062994c;
      param_1 = param_1 + 1;
    } while (iVar2 < (int)((uint)*(ushort *)(param_3 + 2) * param_2));
  }
  return;
}


