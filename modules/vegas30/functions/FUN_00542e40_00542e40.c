/* Module: vegas30.exe
   Function: FUN_00542e40
   Address: 00542e40
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00542e40(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_2 == 2) {
    uVar1 = *(undefined4 *)(param_1 + 0x14);
    uVar3 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x14);
    uVar3 = 0xffffffff;
  }
  iVar2 = _SfList_InsertList_16(uVar1,uVar3,&param_2,1);
  if (-1 < iVar2) {
    FUN_00542e30();
  }
  return iVar2;
}


