/* Module: sftrkfx1.dll
   Function: FUN_5cbab570
   Address: 5cbab570
   Source: Ghidra pseudocode (Stage 10 batch) */


char FUN_5cbab570(int param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  
  uVar1 = param_4;
  cVar2 = '\0';
  if (param_4 != 0) {
    param_4 = FUN_5cba9ee0(param_1,param_4,param_2,param_3);
    if (param_4 < *(uint *)(uVar1 + 0x28)) {
      cVar2 = '\x01';
      if ((*(uint *)(param_1 + 0x5c) <= param_4) &&
         (param_4 < *(int *)(param_1 + 0x60) + *(uint *)(param_1 + 0x5c))) {
        return '\x03';
      }
    }
    else {
      iVar3 = FUN_5cbaa3b0(param_1,uVar1,param_2,param_3,(int *)&param_4,(undefined4 *)0x0);
      if (iVar3 != 0) {
        iVar3 = FUN_5cbab600(param_1,uVar1,param_2);
        return (iVar3 != 0) + '\x02';
      }
      cVar2 = '\0';
    }
  }
  return cVar2;
}


