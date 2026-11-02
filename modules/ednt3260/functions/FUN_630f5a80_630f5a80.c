/* Module: ednt3260.dll
   Function: FUN_630f5a80
   Address: 630f5a80
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_630f5a80(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  short *psVar3;
  int *piVar4;
  int local_8;
  
  sVar1 = 0;
  psVar3 = (short *)(param_1 + 0xafe6);
  piVar4 = (int *)(param_1 + 0x3fb6e);
  local_8 = 6;
  do {
    sVar1 = sVar1 + 1;
    if (psVar3[-0x617] == 0) {
      *psVar3 = 0;
    }
    else {
      if (sVar1 == 1) {
        *psVar3 = 3;
      }
      else if (sVar1 < 4) {
        uVar2 = FUN_630f5760(psVar3[-0x25ba],psVar3[-0x25b4],*piVar4);
        sVar1 = (short)uVar2;
        if (sVar1 == 0) {
          *psVar3 = 1;
        }
        else if ((sVar1 == 1) || (sVar1 == 2)) {
          *psVar3 = 3;
        }
        else {
          *psVar3 = 2;
        }
      }
      else {
        uVar2 = FUN_630f5760(psVar3[-0x25ba],psVar3[-0x25b4],*piVar4);
        *psVar3 = ((short)uVar2 == 2) + 1;
      }
      sVar1 = 0;
    }
    psVar3 = psVar3 + -1;
    piVar4 = piVar4 + -1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  return;
}


