/* Module: vegas30.exe
   Function: FUN_00469bc0
   Address: 00469bc0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00469bc0(undefined4 param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined1 *puVar2;
  int *piVar3;
  int aiStack_64 [3];
  undefined4 *puStack_58;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_20;
  int iStack_1c;
  int iStack_18;
  undefined1 auStack_8 [8];
  
  if ((param_2 != 0) && (param_3 != (int *)0x0)) {
    puStack_58 = &local_48;
    aiStack_64[2] = 1;
    aiStack_64[1] = 0;
    aiStack_64[0] = 0;
    local_48 = 0;
    local_44 = 0;
    piVar3 = param_3;
    (**(code **)(*param_3 + 0x14))(param_3);
    puVar2 = auStack_8;
    iVar1 = (**(code **)(*param_3 + 0xc))(param_3,&stack0xffffffac,0x40,puVar2);
    if (iVar1 < 0) {
      return iVar1;
    }
    if (iStack_18 == 0x40) {
      if (aiStack_64[0] == 0x30) {
        _SfList_AllocAndInsertItem_20(param_2,aiStack_64,0x40,0xffffffff,0);
      }
      else {
        (**(code **)(*param_3 + 0x14))(param_3,puVar2,piVar3,0,0);
      }
      iStack_1c = 0;
      if (0 < aiStack_64[2]) {
        while (iVar1 = FUN_00469910(param_3,uStack_20,param_2,0xffffffff), -1 < iVar1) {
          if (iVar1 == 1) {
            return 0;
          }
          iStack_1c = iStack_1c + 1;
          if (aiStack_64[2] <= iStack_1c) {
            return iVar1;
          }
        }
      }
      return iVar1;
    }
  }
  return -0x7fffbffb;
}


