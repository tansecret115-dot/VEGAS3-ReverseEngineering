/* Module: rmbe3260.dll
   Function: FUN_6605b1a0
   Address: 6605b1a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_6605b1a0(int *param_1,int param_2,undefined4 *param_3,uint param_4,uint *param_5)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  int local_8;
  
  puVar2 = param_5;
  uVar1 = param_4;
  iVar3 = -0x7ff8ffa9;
  local_8 = 0;
  *param_5 = 0;
  if (param_2 != 0) {
    uVar6 = 0;
    puVar5 = param_3;
    uVar7 = param_4;
    puVar8 = param_5;
    puVar4 = (undefined4 *)FUN_6605c600(param_2);
    iVar3 = FUN_6605b350((void *)*puVar4,puVar5,uVar6,uVar7,puVar8);
    if ((-1 < iVar3) && (*puVar2 < uVar1)) {
      FUN_6605c5e0(&param_2);
      if (param_2 == 0) {
        return 0x4025d;
      }
      iVar3 = (**(code **)(*param_1 + 0x38))
                        (param_1,param_2,(int)param_3 + *puVar2,uVar1 - *puVar2,&local_8);
      if (-1 < iVar3) {
        *puVar2 = *puVar2 + local_8;
      }
    }
  }
  return iVar3;
}


