/* Module: erv13260.dll
   Function: FUN_635fad90
   Address: 635fad90
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl FUN_635fad90(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  uint local_8;
  
  local_8 = 0;
  if ((param_2 == 3) || (bVar5 = param_2 == 4, param_2 = 0, bVar5)) {
    param_2 = 1;
  }
  if ((param_3 != 0x40) || (param_2 == 1)) {
    iVar4 = 0;
    do {
      iVar3 = iVar4 * param_3 + param_2;
      iVar1 = iVar4 + 1;
      if (iVar3 < param_3 * iVar1) {
        piVar2 = (int *)(param_1 + iVar3 * 4);
        do {
          if (*piVar2 != 0) {
            if (iVar4 == 0) {
              local_8 = local_8 | 0x20;
            }
            else if (iVar4 == 1) {
              local_8 = local_8 | 0x10;
            }
            else if (iVar4 == 2) {
              local_8 = local_8 | 8;
            }
            else if (iVar4 == 3) {
              local_8 = local_8 | 4;
            }
            else if (iVar4 == 4) {
              local_8 = local_8 | 2;
            }
            else {
              if (iVar4 != 5) {
                fprintf((FILE *)(_iob_exref + 0x20),s_Error_in_CBP_assignment_636066cc);
                    /* WARNING: Subroutine does not return */
                exit(-1);
              }
              local_8 = local_8 | 1;
            }
            break;
          }
          iVar3 = iVar3 + 1;
          piVar2 = piVar2 + 1;
        } while (iVar3 < param_3 * iVar1);
      }
      iVar4 = iVar1;
      if (5 < iVar1) {
        return local_8;
      }
    } while( true );
  }
  iVar4 = 0;
  piVar2 = (int *)(param_1 + 8);
  do {
    if ((((piVar2[-2] != 0) || (piVar2[-1] != 0)) || (*piVar2 != 0)) || (piVar2[1] != 0)) {
      local_8 = 0x20;
      break;
    }
    iVar4 = iVar4 + 4;
    piVar2 = piVar2 + 4;
  } while (iVar4 < 0x40);
  iVar4 = 0x40;
  piVar2 = (int *)(param_1 + 0x108);
  do {
    if (((piVar2[-2] != 0) || (piVar2[-1] != 0)) || ((*piVar2 != 0 || (piVar2[1] != 0)))) {
      local_8 = local_8 | 0x10;
      break;
    }
    iVar4 = iVar4 + 4;
    piVar2 = piVar2 + 4;
  } while (iVar4 < 0x80);
  iVar4 = 0x80;
  piVar2 = (int *)(param_1 + 0x208);
  do {
    if (((piVar2[-2] != 0) || (piVar2[-1] != 0)) || ((*piVar2 != 0 || (piVar2[1] != 0)))) {
      local_8 = local_8 | 8;
      break;
    }
    iVar4 = iVar4 + 4;
    piVar2 = piVar2 + 4;
  } while (iVar4 < 0xc0);
  iVar4 = 0xc0;
  piVar2 = (int *)(param_1 + 0x308);
  do {
    if ((((piVar2[-2] != 0) || (piVar2[-1] != 0)) || (*piVar2 != 0)) || (piVar2[1] != 0)) {
      local_8 = local_8 | 4;
      break;
    }
    iVar4 = iVar4 + 4;
    piVar2 = piVar2 + 4;
  } while (iVar4 < 0x100);
  iVar4 = 0x100;
  piVar2 = (int *)(param_1 + 0x408);
  while (((piVar2[-2] == 0 && (piVar2[-1] == 0)) && ((*piVar2 == 0 && (piVar2[1] == 0))))) {
    iVar4 = iVar4 + 4;
    piVar2 = piVar2 + 4;
    if (0x13f < iVar4) {
LAB_635faec2:
      iVar4 = 0x140;
      piVar2 = (int *)(param_1 + 0x508);
      while (((piVar2[-2] == 0 && (piVar2[-1] == 0)) && ((*piVar2 == 0 && (piVar2[1] == 0))))) {
        iVar4 = iVar4 + 4;
        piVar2 = piVar2 + 4;
        if (0x17f < iVar4) {
          return local_8;
        }
      }
      return local_8 | 1;
    }
  }
  local_8 = local_8 | 2;
  goto LAB_635faec2;
}


