/* Module: mp3plug.dll
   Function: FUN_5f6ed040
   Address: 5f6ed040
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5f6ed040(int param_1,int param_2)

{
  int *in_EAX;
  int iVar1;
  
  iVar1 = FUN_5f6d9760(param_2 * 4);
  *in_EAX = iVar1;
  if (iVar1 != 0) {
    iVar1 = FUN_5f6d9760(param_1 * 4);
    in_EAX[1] = iVar1;
    if (iVar1 != 0) {
      iVar1 = FUN_5f6d9760(param_1 * 4);
      in_EAX[2] = iVar1;
      if (iVar1 != 0) {
        iVar1 = FUN_5f6d9760(param_1 * 4);
        in_EAX[3] = iVar1;
        if (iVar1 != 0) {
          iVar1 = FUN_5f6d9760(param_1 * 4);
          in_EAX[4] = iVar1;
          if (iVar1 != 0) {
            iVar1 = FUN_5f6d9760(param_1 * 4);
            in_EAX[5] = iVar1;
            if (iVar1 != 0) {
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}


