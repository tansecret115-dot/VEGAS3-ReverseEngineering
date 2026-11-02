/* Module: rmbe3260.dll
   Function: FUN_66051690
   Address: 66051690
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_66051690(undefined4 *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  
  puVar4 = param_1;
  if (DAT_660753e4 == 0) {
    DAT_660753e0 = FUN_66004760();
  }
  if (DAT_660753e0 != 0) {
    puVar1 = (undefined1 *)((int)param_1 + 3);
    puVar2 = (undefined1 *)((int)param_1 + 2);
    puVar3 = (undefined1 *)((int)param_1 + 1);
    param_1 = (undefined4 *)
              CONCAT13(*(undefined1 *)puVar4,CONCAT12(*puVar3,CONCAT11(*puVar2,*puVar1)));
    *puVar4 = param_1;
  }
  return;
}


