/* Module: rmto3260.dll
   Function: FUN_662f5e70
   Address: 662f5e70
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662f5e70(int *param_1,uint param_2)

{
  int iVar1;
  undefined1 local_110 [256];
  int local_10 [3];
  
  if (3 < param_2) {
    return -0x7fffbffb;
  }
  iVar1 = (**(code **)(*param_1 + 0x28))(param_1,s_Generated_By_6630af48,local_110,0xff);
  if (-1 < iVar1) {
    switch(param_2) {
    case 0:
      break;
    case 1:
      break;
    case 2:
      break;
    case 3:
    }
    FUN_662f5ba0(local_10);
    iVar1 = (**(code **)(*param_1 + 0x2c))(param_1,s_Content_Rating_6630af38,local_10[0]);
    FUN_662ef0f0(local_10);
  }
  return iVar1;
}


