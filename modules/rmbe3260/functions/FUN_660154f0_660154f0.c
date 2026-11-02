/* Module: rmbe3260.dll
   Function: FUN_660154f0
   Address: 660154f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_660154f0(int *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  ushort uVar6;
  int local_c;
  int local_8;
  
  piVar4 = param_1;
  iVar1 = param_1[4];
  uVar6 = 0;
  local_8 = -0x7ffbfd7f;
  if ((ushort)iVar1 == 0) {
    return -0x7ffbfd7f;
  }
  do {
    iVar2 = *(int *)(piVar4[3] + (uint)uVar6 * 4);
    puVar3 = *(undefined4 **)(iVar2 + 4);
    iVar5 = local_8;
    if (puVar3 != (undefined4 *)0x0) {
      param_1 = (int *)0x0;
      iVar5 = (**(code **)*puVar3)(puVar3,&DAT_66065b08,&param_1);
      if (-1 < iVar5) {
        (**(code **)(*param_1 + 0x40))(param_1,&local_c);
        if (param_1 != (int *)0x0) {
          (**(code **)(*param_1 + 8))(param_1);
        }
        iVar5 = local_8;
        if (local_c == param_2) {
          *param_3 = *(undefined4 *)(iVar2 + 0x10);
          return 0;
        }
      }
    }
    local_8 = iVar5;
    uVar6 = uVar6 + 1;
    if ((ushort)iVar1 <= uVar6) {
      return local_8;
    }
  } while( true );
}


