/* Module: sftrkfx1.dll
   Function: FUN_5cbaa160
   Address: 5cbaa160
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cbaa160(undefined4 *param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  HCURSOR hCursor;
  HCURSOR pHVar5;
  
  if ((param_1[0x15] & 0x10) == 0) {
    SetFocus((HWND)*param_1);
    if (((((uint)param_1[0x16] < (uint)param_1[0x20]) &&
         (puVar1 = (undefined4 *)param_1[param_1[0x16] + 0x21], puVar1 != (undefined4 *)0x0)) &&
        (param_1[3] + -5 <= param_3)) && (param_3 <= param_1[5] + 5)) {
      param_1[0x1f] = 0;
      param_1[0x1e] = 0;
      uVar4 = FUN_5cba9ee0((int)param_1,(int)puVar1,param_3,param_4);
      if (uVar4 < (uint)puVar1[10]) {
        FUN_5cbaa110(param_1,(int)puVar1,uVar4);
        FUN_5cbaa240();
        FUN_5cba9f70(puVar1);
        iVar2 = param_1[0x1e];
        iVar3 = param_1[0x1f];
        param_1[0x15] = param_1[0x15] | 8;
        hCursor = (HCURSOR)FUN_5cbdec70(4);
        param_1[0x19] = param_3 + iVar2;
        param_1[0x1b] = param_3 + iVar2;
        param_1[0x1d] = uVar4;
        param_1[0x1a] = param_4 + iVar3;
        param_1[0x1c] = param_4 + iVar3;
        SetCapture((HWND)*param_1);
        pHVar5 = GetCursor();
        if (pHVar5 != hCursor) {
          SetCursor(hCursor);
        }
      }
    }
  }
  return;
}


