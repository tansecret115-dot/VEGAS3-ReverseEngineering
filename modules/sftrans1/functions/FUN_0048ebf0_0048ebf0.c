/* Module: sftrans1.dll
   Function: FUN_0048ebf0
   Address: 0048ebf0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_0048ebf0(int param_1,undefined4 param_2,undefined4 param_3,double param_4,undefined4 param_5)

{
  uint uVar1;
  LONG LVar2;
  int iVar3;
  RECT local_20;
  RECT local_10;
  
  ceil(param_4 + *(double *)(param_1 + 0x550));
  LVar2 = ftol();
  local_20.left = *(LONG *)(param_1 + 0x568);
  local_20.top = ftol();
  local_20.right = *(LONG *)(param_1 + 0x56c);
  uVar1 = *(uint *)(*(int *)(param_1 + 8) + 0xc4);
  *(undefined4 *)(param_1 + 0x44c) = param_3;
  param_4 = param_4 / (double)uVar1;
  *(double *)(param_1 + 0x88) = (param_4 + param_4) - _DAT_00555908;
  local_20.bottom = LVar2;
  iVar3 = FUN_0053f9e0(param_1 + 0x38,&local_10,0,0,0);
  if (-1 < iVar3) {
    if ((*(uint *)(param_1 + 0x7c) & 8) == 0) {
      if ((*(uint *)(param_1 + 0x7c) & 0x20) != 0) {
        local_20.right = local_10.right;
      }
    }
    else {
      local_20.left = local_10.left;
    }
    IntersectRect(&local_20,&local_10,&local_20);
    FUN_00540150(&local_20,param_2,param_1 + 0x24,0,param_5);
  }
  return;
}


