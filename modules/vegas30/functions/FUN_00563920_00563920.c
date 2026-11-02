/* Module: vegas30.exe
   Function: FUN_00563920
   Address: 00563920
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00563920(void)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  undefined4 local_4;
  
  local_4 = 0;
  puVar3 = &DAT_0061b3b0;
  piVar2 = DAT_0064b510;
  iVar1 = (**(code **)(*DAT_0064b510 + 0x54))(DAT_0064b510,&local_4,&DAT_0061b3b0);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*DAT_0064b510 + 0x68))(DAT_0064b510,piVar2,puVar3);
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  return iVar1;
}


