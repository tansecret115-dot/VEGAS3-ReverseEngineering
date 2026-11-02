/* Module: rmbe3260.dll
   Function: FUN_66015300
   Address: 66015300
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_66015300(void *param_1)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  byte *pbVar6;
  bool bVar7;
  int *local_c;
  int *local_8;
  
  if (*(int *)((int)param_1 + 100) != 0) {
    return 0;
  }
  FUN_660158c0((int)param_1);
  local_8 = (int *)0x0;
  iVar2 = (**(code **)(**(int **)((int)param_1 + 0x50) + 0xc))
                    (*(int **)((int)param_1 + 0x50),&local_8);
  if (-1 < iVar2) {
    while (iVar2 != 0x40012) {
      pbVar6 = *(byte **)((int)param_1 + 0xc);
      pcVar3 = s_audio_x_pn_realaudio_6606cc78;
      pbVar5 = pbVar6;
      do {
        bVar1 = *pcVar3;
        bVar7 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_6601537d:
          iVar2 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_66015382;
        }
        if (bVar1 == 0) break;
        bVar1 = pcVar3[1];
        bVar7 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_6601537d;
        pcVar3 = pcVar3 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar2 = 0;
LAB_66015382:
      if (iVar2 == 0) {
        puVar4 = operator_new(0x44);
        if (puVar4 == (undefined4 *)0x0) goto LAB_66015405;
        puVar4 = FUN_660168c0(puVar4);
      }
      else {
        pcVar3 = s_video_x_pn_realvideo_6606cde8;
        do {
          bVar1 = *pcVar3;
          bVar7 = bVar1 < *pbVar6;
          if (bVar1 != *pbVar6) {
LAB_660153ca:
            iVar2 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
            goto LAB_660153cf;
          }
          if (bVar1 == 0) break;
          bVar1 = pcVar3[1];
          bVar7 = bVar1 < pbVar6[1];
          if (bVar1 != pbVar6[1]) goto LAB_660153ca;
          pcVar3 = pcVar3 + 2;
          pbVar6 = pbVar6 + 2;
        } while (bVar1 != 0);
        iVar2 = 0;
LAB_660153cf:
        if (iVar2 == 0) {
          puVar4 = operator_new(0x5c);
          if (puVar4 == (undefined4 *)0x0) {
LAB_66015405:
            puVar4 = (undefined4 *)0x0;
          }
          else {
            puVar4 = FUN_660168e0(puVar4);
          }
        }
        else {
          puVar4 = operator_new(0x3c);
          if (puVar4 == (undefined4 *)0x0) goto LAB_66015405;
          puVar4 = FUN_66016850(puVar4);
        }
      }
      if (puVar4 == (undefined4 *)0x0) {
        iVar2 = -0x7ff8fff2;
      }
      else {
        puVar4[1] = local_8;
        (**(code **)(*local_8 + 4))(local_8);
        local_c = (int *)0x0;
        iVar2 = (**(code **)*local_8)(local_8,&DAT_66065b08,&local_c);
        if (-1 < iVar2) {
          (**(code **)(*local_c + 0x20))(local_c,puVar4 + 5);
          (**(code **)(*local_c + 0x28))(local_c,puVar4 + 6);
          (**(code **)(*local_c + 0x30))(local_c,puVar4 + 7);
          if (local_c != (int *)0x0) {
            (**(code **)(*local_c + 8))(local_c);
            local_c = (int *)0x0;
          }
        }
        iVar2 = FUN_660158a0(param_1,puVar4);
      }
      if (local_8 != (int *)0x0) {
        (**(code **)(*local_8 + 8))(local_8);
        local_8 = (int *)0x0;
      }
      if ((iVar2 < 0) ||
         (iVar2 = (**(code **)(**(int **)((int)param_1 + 0x50) + 0x10))
                            (*(int **)((int)param_1 + 0x50),&local_8), iVar2 < 0)) break;
    }
    if (-1 < iVar2) {
      *(undefined4 *)((int)param_1 + 100) = 1;
    }
  }
  return iVar2;
}


