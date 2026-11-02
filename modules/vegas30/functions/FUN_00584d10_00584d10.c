/* Module: vegas30.exe
   Function: FUN_00584d10
   Address: 00584d10
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00584d10(undefined4 param_1,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_4;
  iVar1 = FUN_005824a0(param_1,param_2,param_3,param_4,&param_4);
  if (iVar1 == 0) {
    if (param_2 < 0x11) {
      if (param_2 == 0x10) {
        PostQuitMessage(0);
        return param_4;
      }
      if (param_2 == 1) {
        iVar2 = FUN_00584ae0();
        return (-1 < iVar2) - 1;
      }
      if (param_2 != 2) {
LAB_00584d8f:
        iVar2 = FUN_00582a50(param_1,param_2,param_3,iVar2);
        return iVar2;
      }
      FUN_00584b80();
    }
    else {
      if (param_2 != 0x111) goto LAB_00584d8f;
      if (*(int *)(DAT_0065a054 + 0x44) == 0) {
        iVar2 = FUN_00582a50(param_1,0x111,param_3,iVar2);
        return iVar2;
      }
      iVar1 = FUN_00585a10(param_3 & 0xffff);
      if (iVar1 == 0) {
        iVar2 = FUN_00582a50(param_1,0x111,param_3,iVar2);
        return iVar2;
      }
    }
  }
  return param_4;
}


