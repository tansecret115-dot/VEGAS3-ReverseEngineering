/* Module: pncrt.dll
   Function: FUN_78006530
   Address: 78006530
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 * __thiscall FUN_78006530(void *this,undefined1 *param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  
  iVar3 = DName::isEmpty(this);
  if (iVar3 == 0) {
    if (param_1 == (undefined1 *)0x0) {
      iVar3 = FUN_78006500(this);
      param_2 = iVar3 + 1;
      param_1 = (undefined1 *)FUN_78006050(&DAT_78041a90,param_2,0);
    }
    if (param_1 != (undefined1 *)0x0) {
      piVar1 = *(int **)this;
      puVar5 = param_1;
      while ((piVar1 != (int *)0x0 && (0 < param_2))) {
        puVar2 = (undefined4 *)*piVar1;
        iVar3 = (*(code *)*puVar2)();
        if (iVar3 != 0) {
          if (param_2 - iVar3 < 0) {
            iVar3 = param_2;
          }
          iVar4 = (*(code *)puVar2[1])(puVar5,iVar3);
          if (iVar4 != 0) {
            param_2 = param_2 - iVar3;
            puVar5 = puVar5 + iVar3;
          }
        }
        piVar1 = (int *)piVar1[1];
      }
      *puVar5 = 0;
      return param_1;
    }
  }
  else if (param_1 != (undefined1 *)0x0) {
    *param_1 = 0;
  }
  return param_1;
}


