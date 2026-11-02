/* Module: rmto3260.dll
   Function: FUN_662f5d70
   Address: 662f5d70
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662f5d70(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  char local_110 [256];
  int local_10 [3];
  
  puVar1 = param_2;
  if ((param_2 != (undefined4 *)0x0) && (param_1[1] != 0)) {
    iVar2 = (**(code **)(*param_1 + 0x28))(param_1,s_Content_Rating_6630af38,local_110,0xff);
    if (-1 < iVar2) {
      FUN_662ef160(local_10,local_110);
      iVar2 = FUN_662f5b00(local_10,&param_2);
      FUN_662ef0f0(local_10);
      switch(param_2) {
      case (undefined4 *)0x1:
        goto switchD_662f5de7_caseD_1;
      case (undefined4 *)0x2:
        *puVar1 = 1;
        return iVar2;
      default:
        assert(s_FALSE_6630a1a8,s_0fextclipprop_cpp_6630b78e + 2,0x76);
switchD_662f5de7_caseD_1:
        *puVar1 = 0;
        break;
      case (undefined4 *)0x5:
        *puVar1 = 2;
        return iVar2;
      case (undefined4 *)0x8:
        *puVar1 = 3;
        return iVar2;
      }
    }
    return iVar2;
  }
  return -0x7fffbffd;
}


