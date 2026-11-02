/* Module: vegas30.exe
   Function: FUN_0057c810
   Address: 0057c810
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_0057c810(int param_1,int *param_2)

{
  int iVar1;
  short sVar2;
  int iVar3;
  short local_a0 [2];
  undefined1 local_9c [156];
  
  *param_2 = 0;
  iVar3 = _SfList_CreateExZ_32(param_2,0x9c,0xffffffff,0xffffffff,4,0,0,0);
  if ((-1 < iVar3) && (iVar3 = FUN_0057cef0(), -1 < iVar3)) {
    iVar1 = param_1 + 0x14;
    sVar2 = FUN_0057d600(iVar1,0,1,3,4,local_9c);
    if (sVar2 == 0) {
      iVar3 = _SfList_InsertList_16(*param_2,0xffffffff,local_9c,1);
      while (-1 < iVar3) {
        iVar3 = 0;
        *(undefined4 *)(param_1 + 0x154) = 0;
        sVar2 = FUN_0057d600(iVar1,0,1,3,5,local_9c);
        if (sVar2 != 0) {
          if (sVar2 == 7) goto LAB_0057c92f;
          iVar3 = -0x7fffbffb;
          break;
        }
        iVar3 = _SfList_InsertList_16(*param_2,0xffffffff,local_9c,1);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x154) = 1;
      sVar2 = FUN_0057d600(iVar1,0,1,8,1,local_a0);
      if (sVar2 == 0) {
        iVar3 = (-(uint)(local_a0[0] != 3) & 0x80004004) + 1;
      }
      else {
        iVar3 = -0x7fffbffb;
      }
    }
  }
  if (*param_2 != 0) {
    _SfList_Destroy_4(*param_2);
    *param_2 = 0;
  }
LAB_0057c92f:
  if (*(int *)(param_1 + 0x14c) != 0) {
    FUN_0057d0a0();
  }
  return iVar3;
}


