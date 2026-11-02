/* Module: erv23260.dll
   Function: FUN_638084f0
   Address: 638084f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_638084f0(void *param_1)

{
  uint uVar1;
  int iVar2;
  uint local_8;
  
  (**(code **)(**(int **)((int)param_1 + 0x6c4) + 8))();
  *(undefined4 *)((int)param_1 + 0x5f8) = 0;
  *(undefined4 *)((int)param_1 + 0x624) = 0;
  *(undefined4 *)((int)param_1 + 0x610) = 0;
  *(undefined4 *)((int)param_1 + 0x5f0) = 0;
  *(undefined4 *)((int)param_1 + 0x60c) = 0;
  *(undefined4 *)((int)param_1 + 0x614) = 0;
  FUN_638087c0(param_1,0,*(void **)((int)param_1 + 0x6c4));
  local_8 = 0;
  if (*(int *)((int)param_1 + 0x6dc) == 0) {
    return 0;
  }
  do {
    uVar1 = 0;
    if (*(int *)((int)param_1 + 0x6e0) != 0) {
      do {
        iVar2 = *(int *)((int)param_1 + 0x5ec);
        if (iVar2 == 0) {
          FUN_637fd360(*(void **)((int)param_1 + 0x6c4),1,1);
          FUN_637fd360(*(void **)((int)param_1 + 0x6c4),3,4);
          iVar2 = 6;
          do {
            FUN_637fd360(*(void **)((int)param_1 + 0x6c4),0xff,8);
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
        else {
          if ((iVar2 != 1) && (iVar2 != 3)) {
            return 1;
          }
          FUN_637fd360(*(void **)((int)param_1 + 0x6c4),1,1);
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(uint *)((int)param_1 + 0x6e0));
    }
    local_8 = local_8 + 1;
    if (*(uint *)((int)param_1 + 0x6dc) <= local_8) {
      return 0;
    }
  } while( true );
}


