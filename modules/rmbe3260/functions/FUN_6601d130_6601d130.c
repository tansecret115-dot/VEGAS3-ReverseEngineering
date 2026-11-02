/* Module: rmbe3260.dll
   Function: FUN_6601d130
   Address: 6601d130
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_6601d130(int param_1)

{
  undefined4 *puVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined1 local_528 [260];
  undefined1 local_424 [260];
  char local_320 [256];
  char local_220 [260];
  char local_11c [260];
  undefined4 *local_18;
  int local_14;
  int *local_10;
  int *local_c;
  int *local_8;
  
  if (*(int *)(param_1 + 200) == 0) {
    return 0;
  }
  piVar3 = *(int **)(param_1 + 0x140);
  puVar1 = (undefined4 *)(param_1 + 0x140);
  local_18 = puVar1;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
    *puVar1 = 0;
  }
  iVar4 = FUN_6604ee00((void *)(param_1 + 0x160),2,s_CreateLiveDataSink_6606dbb8,(int)puVar1);
  if (-1 < iVar4) {
    if (param_1 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = param_1 + 0x18;
    }
    iVar4 = (**(code **)(*(int *)*puVar1 + 0x20))((int *)*puVar1,iVar4);
  }
  piVar3 = *(int **)(param_1 + 0x144);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
    *(undefined4 *)(param_1 + 0x144) = 0;
  }
  local_c = (int *)0x0;
  if ((-1 < iVar4) &&
     (iVar4 = FUN_6604ee00((void *)(param_1 + 0x148),1,s_RMACreateAsmConversionFilter_6606db98,
                           (int)&local_c), -1 < iVar4)) {
    iVar4 = (**(code **)*local_c)(local_c,&DAT_66066158,(undefined4 *)(param_1 + 0x144));
  }
  if (local_c != (int *)0x0) {
    (**(code **)(*local_c + 8))(local_c);
    local_c = (int *)0x0;
  }
  if (iVar4 < 0) {
    return iVar4;
  }
  iVar4 = (**(code **)(**(int **)(param_1 + 0x78) + 0x24))
                    (*(int **)(param_1 + 0x78),local_220,local_11c,&local_14,local_528,local_424,
                     0x104);
  iVar5 = -1;
  pcVar6 = local_220;
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar2 != '\0');
  if (iVar5 != -2) {
    iVar5 = -1;
    pcVar6 = local_11c;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    if ((iVar5 != -2) && (local_14 != 0)) {
      if (iVar4 < 0) {
        return iVar4;
      }
      local_10 = (int *)0x0;
      iVar5 = (*(code *)**(undefined4 **)*local_18)((undefined4 *)*local_18,&DAT_66066358,&local_10)
      ;
      if (-1 < iVar5) {
        local_8 = (int *)0x0;
        iVar5 = (**(code **)**(undefined4 **)(param_1 + 0x78))
                          (*(undefined4 **)(param_1 + 0x78),&DAT_66065a08,&local_8);
        if (-1 < iVar5) {
          iVar5 = (**(code **)(*local_8 + 0x14))(local_8,local_320,0xff);
          if ((-1 < iVar5) && (local_320[0] != '\0')) {
            (**(code **)(*local_10 + 0xc))(local_10,local_320);
          }
          if (local_8 != (int *)0x0) {
            (**(code **)(*local_8 + 8))(local_8);
            local_8 = (int *)0x0;
          }
        }
        if (local_10 != (int *)0x0) {
          (**(code **)(*local_10 + 8))(local_10);
        }
      }
      if (iVar4 < 0) {
        return iVar4;
      }
      iVar4 = (**(code **)(*(int *)*local_18 + 0xc))
                        ((int *)*local_18,local_220,local_14,local_528,local_424,local_11c);
      return iVar4;
    }
  }
  return -0x7ffbfda7;
}


