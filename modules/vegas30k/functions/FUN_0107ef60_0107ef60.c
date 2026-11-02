/* Module: vegas30k.dll
   Function: FUN_0107ef60
   Address: 0107ef60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0107ef60(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  int local_c;
  
  iVar4 = 0;
  if (-1 < param_3 + -1) {
    puVar3 = (undefined2 *)(param_1 + (param_3 + -1) * 3);
    local_c = param_3;
    do {
      iVar1 = ftol();
      if (iVar1 < -0x800000) {
        iVar2 = -0x800000;
      }
      else {
        iVar2 = 0x7fffff;
        if (iVar1 < 0x800000) {
          iVar2 = iVar1;
        }
      }
      *puVar3 = (short)iVar2;
      iVar4 = iVar4 + 1;
      *(char *)(puVar3 + 1) = (char)((uint)iVar2 >> 0x10);
      if (param_4 == iVar4) {
        iVar4 = 0;
      }
      puVar3 = (undefined2 *)((int)puVar3 + -3);
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  return;
}


