/* Module: vidcap30.exe
   Function: FUN_004b94a0
   Address: 004b94a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_004b94a0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *unaff_ESI;
  undefined4 unaff_retaddr;
  
  puVar1 = param_1;
  iVar2 = 0;
  if (param_1 != (undefined4 *)0x0) {
    param_1 = (undefined4 *)0x0;
    iVar2 = (**(code **)*puVar1)(puVar1,&DAT_00586200);
    if ((-1 < iVar2) && (&param_1 != (undefined4 **)0x0)) {
      iVar2 = (**(code **)((int)param_1 + 0xc))(&param_1,puVar1,unaff_ESI,unaff_retaddr);
      (**(code **)(*unaff_ESI + 8))(unaff_ESI);
    }
  }
  return iVar2;
}


