/* Module: erv23260.dll
   Function: FUN_63812290
   Address: 63812290
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_63812290(void *this,int param_1,uint param_2,char param_3,int param_4)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  
  cVar2 = param_3;
  iVar1 = *(int *)((int)this + 0x118);
  iVar4 = *(int *)(*(int *)((int)this + 0x110) + param_2 * 4) + param_1 * iVar1 +
          *(int *)((int)this + 0x120);
  *(char *)(iVar4 + 0xb) = (char)((param_1 * 3 & 0xfffffffU) << 1);
  uVar3 = FUN_63812500(this,param_2);
  *(char *)(iVar4 + 2 + iVar1 * 8) = (char)uVar3;
  if (param_4 == 1) {
    FUN_63812380(this,param_2,param_1,param_3);
    return;
  }
  FUN_63812380(this,param_2,param_1,param_3);
  if (param_3 == '\x03') {
    param_3 = '\x02';
  }
  if (cVar2 == '\0') {
    param_3 = (-(((byte)*(undefined4 *)((int)this + 0x14) & 1) != 1) & 0xfdU) + 5;
  }
  while (param_4 = param_4 + -1, param_4 != 0) {
    FUN_63812380(this,param_2,param_1 - param_4,param_3);
  }
  return;
}


