/* Module: rmbe3260.dll
   Function: FUN_660155a0
   Address: 660155a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_660155a0(int param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  int local_c;
  int *local_8;
  
  uVar4 = 0;
  uVar3 = (ushort)*(undefined4 *)(param_1 + 0x10);
  iVar5 = -0x7ffbfd7f;
  if (uVar3 == 0) {
    return -0x7ffbfd7f;
  }
  do {
    iVar1 = *(int *)(*(int *)(param_1 + 0xc) + (uint)uVar4 * 4);
    puVar2 = *(undefined4 **)(iVar1 + 4);
    if (puVar2 != (undefined4 *)0x0) {
      local_8 = (int *)0x0;
      iVar5 = (**(code **)*puVar2)(puVar2,&DAT_66065b08,&local_8);
      if (-1 < iVar5) {
        iVar5 = (**(code **)(*local_8 + 0x40))(local_8,&local_c);
        if (local_8 != (int *)0x0) {
          (**(code **)(*local_8 + 8))(local_8);
        }
        if (local_c == param_2) {
          *param_3 = iVar1;
          return 0;
        }
      }
    }
    uVar4 = uVar4 + 1;
    if (uVar3 <= uVar4) {
      return iVar5;
    }
  } while( true );
}


