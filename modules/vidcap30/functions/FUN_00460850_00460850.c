/* Module: vidcap30.exe
   Function: FUN_00460850
   Address: 00460850
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00460850(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  int iVar2;
  short sVar3;
  
  if (param_1 == 0) {
    return -1;
  }
  if (((0x1ff < param_2) && (param_2 < 0x20b)) && (param_2 != 0x20a)) {
    FUN_004611b0(param_1,param_2,param_3,param_4);
    return 0;
  }
  sVar1 = (short)param_4;
  sVar3 = (short)((uint)param_4 >> 0x10);
  if (param_2 < 0x85) {
    if (param_2 == 0x84) {
      iVar2 = FUN_00461180(param_1,(int)sVar1,(int)sVar3);
      return iVar2;
    }
    switch(param_2) {
    case 2:
      FUN_00460c10(param_1);
      return 0;
    case 3:
      FUN_00460c50(param_1,(int)sVar1,(int)sVar3);
      FUN_00461160(param_1);
      return 0;
    case 5:
      FUN_00460cb0(param_1,(int)sVar1,(int)sVar3);
      FUN_00461160(param_1);
      return 0;
    case 0xc:
      iVar2 = FUN_00460b30(param_1,param_4);
      return iVar2;
    case 0xd:
      iVar2 = FUN_00460be0(param_1,param_4,param_3);
      return iVar2;
    case 0xe:
      iVar2 = lstrlenA(*(LPCSTR *)(param_1 + 0x28));
      return iVar2;
    case 0xf:
      FUN_00460d40(param_1,param_4);
      return 0;
    case 0x18:
      FUN_00460ee0(param_1,param_3);
      return 0;
    case 0x30:
      iVar2 = FUN_00460ea0(param_1,param_3,param_4);
      return iVar2;
    case 0x47:
      FUN_00460d00(param_1,param_4);
      FUN_00461160(param_1);
      return 0;
    }
  }
  else {
    switch(param_2) {
    case 0x601:
      iVar2 = FUN_00460f60(param_1,param_3,param_4);
      return iVar2;
    case 0x602:
      iVar2 = FUN_00460fd0(param_1,param_3,param_4);
      return iVar2;
    case 0x603:
      iVar2 = FUN_00460fc0(param_1);
      return iVar2;
    case 0x604:
      iVar2 = FUN_00461020(param_1);
      return iVar2;
    case 0x605:
      iVar2 = FUN_00461070(param_1,param_3,param_4);
      return iVar2;
    case 0x606:
      iVar2 = FUN_00461030(param_1,param_3,param_4);
      return iVar2;
    case 0x607:
      FUN_004610b0(param_1,param_4);
      return 0;
    case 0x608:
      FUN_00461120(param_1,param_4);
      return 0;
    case 0x609:
      FUN_004611e0(param_1,(int)sVar1,(int)sVar3);
    }
  }
  return 0;
}


