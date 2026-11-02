/* Module: vegas30.exe
   Function: FUN_0057b310
   Address: 0057b310
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_0057b310(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  
  iVar1 = 0;
  uVar5 = 0xffffffff;
  if (param_1 == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *param_1;
  }
  iVar2 = 0;
  if (0 < iVar3) {
    puVar4 = (uint *)(param_1[2] + 8);
    do {
      if (*puVar4 < uVar5) {
        iVar1 = iVar2;
        uVar5 = *puVar4;
      }
      iVar2 = iVar2 + 1;
      puVar4 = (uint *)((int)puVar4 + param_1[1]);
    } while (iVar2 < iVar3);
  }
  return iVar1;
}


