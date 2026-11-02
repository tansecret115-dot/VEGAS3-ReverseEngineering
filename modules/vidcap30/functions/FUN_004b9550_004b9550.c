/* Module: vidcap30.exe
   Function: FUN_004b9550
   Address: 004b9550
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004b9550(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *unaff_retaddr;
  int *piVar3;
  undefined4 *puVar4;
  
  puVar1 = param_1;
  iVar2 = 0;
  if (param_1 != (undefined4 *)0x0) {
    puVar4 = &param_1;
    param_1 = (undefined4 *)0x0;
    piVar3 = (int *)&DAT_00586210;
    iVar2 = (**(code **)*puVar1)(puVar1,&DAT_00586210,puVar4);
    if ((-1 < iVar2) && (piVar3 != (int *)0x0)) {
      iVar2 = (**(code **)(*piVar3 + 0xc))(piVar3,puVar4);
      (**(code **)(*unaff_retaddr + 8))(unaff_retaddr);
    }
  }
  return iVar2;
}


