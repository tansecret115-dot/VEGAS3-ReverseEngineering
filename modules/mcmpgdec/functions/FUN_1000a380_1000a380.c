/* Module: mcmpgdec.dll
   Function: FUN_1000a380
   Address: 1000a380
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_1000a380(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  char local_10c [268];
  
  piVar1 = (int *)(param_1 + 0x66c);
  iVar2 = FUN_1000383c(piVar1);
  if (iVar2 == 0) {
    uVar3 = FUN_10003828((int)piVar1,'\t');
    if ((int)uVar3 < 0x40) {
      if ((int)uVar3 < 0x18) {
        if ((int)(uVar3 - 0xc) < 0) {
          if (*(int *)(param_1 + 0x60) == 0) {
            sprintf(local_10c,"Invalid motion_vector code (MBA ??, pic ??)");
            FUN_1000bb3c(param_1,local_10c);
          }
          *(undefined4 *)(param_1 + 0x5c) = 1;
          iVar2 = 0;
        }
        else {
          iVar2 = (uVar3 - 0xc) * 2;
          FUN_10003858(piVar1,(int)(char)(&DAT_1003105d)[iVar2]);
          iVar4 = FUN_1000383c(piVar1);
          if (iVar4 == 0) {
            iVar2 = (int)(char)(&DAT_1003105c)[iVar2];
          }
          else {
            iVar2 = -(int)(char)(&DAT_1003105c)[iVar2];
          }
        }
      }
      else {
        iVar2 = ((int)uVar3 >> 3) * 2;
        FUN_10003858(piVar1,(int)(char)(&DAT_1003104d)[iVar2]);
        iVar4 = FUN_1000383c(piVar1);
        if (iVar4 == 0) {
          iVar2 = (int)(char)(&DAT_1003104c)[iVar2];
        }
        else {
          iVar2 = -(int)(char)(&DAT_1003104c)[iVar2];
        }
      }
    }
    else {
      iVar2 = ((int)uVar3 >> 6) * 2;
      FUN_10003858(piVar1,(int)(char)(&DAT_1003103d)[iVar2]);
      iVar4 = FUN_1000383c(piVar1);
      if (iVar4 == 0) {
        iVar2 = (int)(char)(&DAT_1003103c)[iVar2];
      }
      else {
        iVar2 = -(int)(char)(&DAT_1003103c)[iVar2];
      }
    }
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}


