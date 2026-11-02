/* Module: aviplug.dll
   Function: FUN_5f95aa70
   Address: 5f95aa70
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f95aa70(undefined4 *param_1)

{
  HGLOBAL hMem;
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  *param_1 = 0;
  iVar3 = -0x7ff8fff2;
  hMem = GlobalAlloc(0x40,0x28);
  puVar1 = GlobalLock(hMem);
  if (((puVar1 != (undefined4 *)0x0) && (piVar2 = FUN_5f959ea0(puVar1), piVar2 != (int *)0x0)) &&
     (iVar3 = (**(code **)(*piVar2 + 0x20))(piVar2), -1 < iVar3)) {
    iVar3 = (**(code **)*piVar2)(piVar2,&DAT_5f9da520,param_1);
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  return iVar3;
}


