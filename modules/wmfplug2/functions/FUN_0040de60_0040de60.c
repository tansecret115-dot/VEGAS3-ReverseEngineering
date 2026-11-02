/* Module: wmfplug2.dll
   Function: FUN_0040de60
   Address: 0040de60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_0040de60(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  
  puVar2 = param_1;
  uVar4 = 0;
  if (param_1 == (undefined4 *)0x0) {
    return 0;
  }
  puVar1 = (undefined4 *)*param_1;
  param_1 = (undefined4 *)0x0;
  iVar3 = (*(code *)*puVar1)(puVar2,&DAT_0047ad40);
  if ((-1 < iVar3) && (&param_1 != (undefined4 **)0x0)) {
    uVar4 = 1;
    (*(code *)param_1[2])(&param_1);
  }
  return uVar4;
}


