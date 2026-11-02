/* Module: mpgmux.dll
   Function: FUN_10008b00
   Address: 10008b00
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_10008b00(uint *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (param_2 == 0) {
    if (param_1[0x1c] == 0) {
      iVar2 = FUN_100069e0((int)param_1);
      if (iVar2 != 0) {
        return;
      }
      iVar2 = FUN_10006bb0(param_1);
      if (iVar2 != 0) {
        return;
      }
      lVar3 = __ftol();
      iVar2 = (int)((ulonglong)lVar3 >> 0x20);
      *(longlong *)(param_1 + 0xb7a) = lVar3;
      uVar1 = param_1[0xb7a];
      uVar4 = __allshr(1,iVar2);
      *(undefined8 *)(param_1 + 0xb7c) = uVar4;
      param_1[0x1c] = 1;
      param_1[0xb7e] = uVar1 + param_1[0xb7c];
      param_1[0xb7f] = iVar2 + (int)((ulonglong)uVar4 >> 0x20) + (uint)CARRY4(uVar1,param_1[0xb7c]);
    }
    if ((char)param_1[0x1b] != '\0') {
      *(undefined1 *)(param_1 + 0x1b) = 0;
      do {
        if (((param_1[0x488] == 0) && (param_1[0x490] == 0)) && (param_1[0x494] == 0)) break;
        iVar2 = FUN_10007920(param_1);
      } while (iVar2 == 0);
      *(undefined1 *)(param_1 + 0x1b) = 1;
    }
    if (param_1[0x47e] != 0) {
      *(double *)(param_1 + 0x51a) =
           *(double *)(param_1 + 0x942) + *(double *)(param_1 + 0x468) +
           *(double *)(param_1 + 0x51a);
      FUN_10008c60((byte *)param_1,1);
    }
    if (param_1[0x14] != 0) {
      FUN_1000b370((int)param_1);
    }
    if ((param_1[0xb] == 4) && (param_1[0x10] != 0)) {
      FUN_100040e0((int)param_1);
    }
  }
  FUN_10001270((int)param_1,(int)(param_1 + 0x52e));
  FUN_10001270((int)param_1,(int)(param_1 + 0x530));
  FUN_10001270((int)param_1,(int)(param_1 + 0x532));
  return;
}


