/* Module: wmfplug2.dll
   Function: FUN_0040a090
   Address: 0040a090
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0040a090(int *param_1,undefined4 param_2,undefined2 *param_3)

{
  undefined2 *puVar1;
  uint *puVar2;
  int iVar3;
  undefined2 extraout_var;
  int unaff_EBX;
  undefined2 *puStack_20;
  uint **ppuStack_1c;
  uint *local_8;
  undefined4 local_4;
  
  puVar1 = param_3;
  local_4 = 0;
  local_8 = (uint *)0x0;
  if (param_3 != (undefined2 *)0x0) {
    *param_3 = 0;
  }
  ppuStack_1c = &local_8;
  puStack_20 = (undefined2 *)0x0;
  iVar3 = (**(code **)(*param_1 + 0x14))(param_1,&local_4,param_2,&param_3);
  puVar2 = local_8;
  if ((-1 < iVar3) && ((short)puStack_20 != 0)) {
    if (unaff_EBX != 1) {
      return -0x7fffbffb;
    }
    if (puVar1 != (undefined2 *)0x0) {
      puStack_20 = puVar1;
      puStack_20 = (undefined2 *)CONCAT22(extraout_var,(short)*local_8);
      iVar3 = (**(code **)(*param_1 + 0x14))
                        (param_1,&ppuStack_1c,param_2,&stack0xfffffff4,puVar1,&puStack_20);
    }
    *puVar2 = (uint)puStack_20 & 0xffff;
    return iVar3;
  }
  return 0;
}


