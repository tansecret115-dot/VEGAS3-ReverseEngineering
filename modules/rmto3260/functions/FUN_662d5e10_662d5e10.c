/* Module: rmto3260.dll
   Function: FUN_662d5e10
   Address: 662d5e10
   Source: Ghidra pseudocode (Stage 10 batch) */


short __thiscall FUN_662d5e10(void *this,char *param_1)

{
  undefined2 uVar1;
  int iVar2;
  short sVar3;
  
  sVar3 = 0;
  iVar2 = FUN_662d5a90(param_1,s_CIRCLE_6630ac50);
  if (iVar2 == 0) {
    iVar2 = FUN_662d5a90(param_1,s_POLYGON_6630ac48);
    if (iVar2 == 0) {
      iVar2 = FUN_662d5a90(param_1,s_RECTANGLE_6630ac3c);
      if (iVar2 != 0) {
        sVar3 = 1;
      }
    }
    else {
      sVar3 = 3;
    }
  }
  else {
    sVar3 = 2;
  }
  if (sVar3 != 0) {
    uVar1 = FUN_662f2bb0(sVar3);
    **(undefined2 **)((int)this + 0x1c) = uVar1;
    *(int *)((int)this + 0x1c) = *(int *)((int)this + 0x1c) + 2;
  }
  return sVar3;
}


