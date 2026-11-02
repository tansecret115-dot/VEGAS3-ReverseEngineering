/* Module: sfnetmedia.dll
   Function: FUN_0041e730
   Address: 0041e730
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_0041e730(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *unaff_ESI;
  undefined4 unaff_retaddr;
  
  puVar1 = param_1;
  iVar2 = 0;
  if (param_1 != (undefined4 *)0x0) {
    param_1 = (undefined4 *)0x0;
    iVar2 = (**(code **)*puVar1)(puVar1,&DAT_00434e50);
    if ((-1 < iVar2) && (&param_1 != (undefined4 **)0x0)) {
      iVar2 = (*(code *)param_1[3])(&param_1,puVar1,unaff_ESI,unaff_retaddr);
      (**(code **)(*unaff_ESI + 8))(unaff_ESI);
    }
  }
  return iVar2;
}


