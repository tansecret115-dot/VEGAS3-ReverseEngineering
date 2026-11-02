/* Module: mpegin.dll
   Function: FUN_10006a50
   Address: 10006a50
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_10006a50(int param_1)

{
  int iVar1;
  uint uVar2;
  
  do {
    FUN_10005ce0((int *)(*(int *)(param_1 + 0x12e54) + 0x128),0xffffff00,0x100);
    while( true ) {
      uVar2 = FUN_100058d0(*(int *)(param_1 + 0x12e54) + 0x128,' ');
      if (((uVar2 != 0x1b5) && (uVar2 != 0x1b2)) ||
         (iVar1 = *(int *)(param_1 + 0x12e54), *(int *)(iVar1 + 0x168) != 0)) {
        return;
      }
      if (uVar2 == 0x1b5) break;
      FUN_10005910((int *)(iVar1 + 0x128),0x20);
      FUN_100073a0(param_1);
    }
    FUN_10005910((int *)(iVar1 + 0x128),0x20);
    uVar2 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x128),4);
    switch(uVar2) {
    case 1:
      FUN_10006bd0(param_1);
      break;
    case 2:
      FUN_10006da0(param_1);
      break;
    case 3:
      FUN_10006e70(param_1);
      break;
    case 4:
      FUN_100073d0(param_1);
      break;
    case 5:
      FUN_10006fe0(param_1);
      break;
    default:
      if (*(int *)(param_1 + 0x14) == 0) {
        FUN_10007e00(param_1,(byte *)s_reserved_extension_start_code_ID_10018b68);
      }
      break;
    case 7:
      FUN_10007010(param_1);
      break;
    case 8:
      FUN_100070a0(param_1);
      break;
    case 9:
      FUN_100072e0(param_1);
      break;
    case 10:
      FUN_10007310(param_1);
    }
  } while( true );
}


