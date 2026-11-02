/* Module: cook3260.dll
   Function: FUN_633a2100
   Address: 633a2100
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_633a2100(void *this,ushort param_1,undefined2 param_2,ushort *param_3)

{
  char cVar1;
  short sVar2;
  short sVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined1 *puVar9;
  int iVar10;
  char *pcVar11;
  undefined1 local_14;
  undefined1 local_10;
  undefined1 uStack_e;
  undefined1 uStack_d;
  undefined1 local_8;
  undefined1 uStack_7;
  undefined1 local_6;
  undefined1 uStack_5;
  
  if (param_1 < 0x1b) {
    switch(param_2) {
    case 0:
      iVar10 = -1;
      pcVar11 = (&PTR_s_8_Kbps_Music_633ab048)[(uint)param_1 * 0xd];
      do {
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar1 != '\0');
      *param_3 = ~(ushort)iVar10;
      return (int *)(&PTR_s_8_Kbps_Music_633ab048)[(uint)param_1 * 0xd];
    case 1:
      iVar10 = (uint)param_1 * 0x34;
      *(int *)((int)this + 0xe) =
           (*(int *)(&DAT_633ab020 + iVar10) / 2 +
           *(int *)(&DAT_633ab02c + iVar10) * *(int *)(&DAT_633ab030 + iVar10)) /
           *(int *)(&DAT_633ab020 + iVar10);
      *param_3 = 4;
      return (int *)((int)this + 0xe);
    case 2:
    case 3:
      *(undefined2 *)((int)this + 4) = 1;
      uVar6 = *(undefined4 *)(&DAT_633ab030 + (uint)param_1 * 0x34);
      *(undefined2 *)((int)this + 10) = 0x10;
      *(undefined4 *)((int)this + 6) = uVar6;
      *(undefined2 *)((int)this + 0xc) = *(undefined2 *)(&DAT_633ab024 + (uint)param_1 * 0x34);
      *param_3 = 10;
      return (int *)((int)this + 4);
    case 4:
      iVar10 = -1;
      pcVar11 = (&PTR_s_For_music_based_video_over_28_Kb_633ab04c)[(uint)param_1 * 0xd];
      do {
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar1 != '\0');
      *param_3 = ~(ushort)iVar10;
      return (int *)(&PTR_s_For_music_based_video_over_28_Kb_633ab04c)[(uint)param_1 * 0xd];
    case 5:
      *param_3 = 4;
      return (int *)&DAT_633a80a4;
    case 6:
      *(int *)((int)this + 0xe) =
           ((int)(*(int *)(&DAT_633ab02c + (uint)param_1 * 0x34) +
                 (*(int *)(&DAT_633ab02c + (uint)param_1 * 0x34) >> 0x1f & 7U)) >> 3) *
           *(int *)(&DAT_633ab03c + (uint)param_1 * 0x34);
      *param_3 = 4;
      return (int *)((int)this + 0xe);
    case 7:
      iVar10 = -1;
      pcVar11 = *(char **)(&DAT_633ab050 + (uint)param_1 * 0x34);
      do {
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar1 != '\0');
      *param_3 = ~(ushort)iVar10;
      return *(int **)(&DAT_633ab050 + (uint)param_1 * 0x34);
    case 0xd:
      *(int *)((int)this + 0xe) =
           (int)(*(int *)(&DAT_633ab02c + (uint)param_1 * 0x34) +
                (*(int *)(&DAT_633ab02c + (uint)param_1 * 0x34) >> 0x1f & 7U)) >> 3;
      *param_3 = 4;
      return (int *)((int)this + 0xe);
    case 0xe:
      iVar10 = (uint)param_1 * 0x34;
      *(int *)((int)this + 0xe) =
           *(int *)(&DAT_633ab020 + iVar10) * *(int *)(&DAT_633ab03c + iVar10) *
           *(int *)(&DAT_633ab024 + iVar10);
      *param_3 = 4;
      return (int *)((int)this + 0xe);
    case 0xf:
      *(int *)((int)this + 0xe) = *(int *)(&DAT_633ab040 + (uint)param_1 * 0x34);
      *param_3 = 4;
      return (int *)((int)this + 0xe);
    case 0x10:
      *(int *)((int)this + 0xe) = 0;
      *param_3 = 4;
      return (int *)((int)this + 0xe);
    case 0x11:
      *(undefined4 *)((int)this + 0xe) = 0;
      *param_3 = 0;
      return (int *)0x0;
    case 0x12:
      puVar7 = *(undefined1 **)((int)this + 0x18);
      if (puVar7 != (undefined1 *)0x0) {
        if (param_1 < 5) {
          iVar10 = 0x1000001;
        }
        else {
          iVar10 = 0x1000003 - (uint)(param_1 < 0x11);
        }
        iVar8 = (uint)param_1 * 0x34;
        uStack_e = (undefined1)*(undefined2 *)(&DAT_633ab028 + iVar8);
        uStack_d = (undefined1)((ushort)*(undefined2 *)(&DAT_633ab028 + iVar8) >> 8);
        sVar2 = *(short *)(&DAT_633ab020 + iVar8);
        sVar3 = *(short *)(&DAT_633ab024 + iVar8);
        local_10 = (undefined1)(sVar2 * sVar3);
        uVar4 = *(undefined2 *)(&DAT_633ab034 + iVar8);
        uVar5 = *(undefined2 *)(&DAT_633ab038 + iVar8);
        *puVar7 = (char)((uint)iVar10 >> 0x18);
        puVar7[1] = (char)((uint)iVar10 >> 0x10);
        puVar7[2] = (char)((uint)iVar10 >> 8);
        local_14 = (undefined1)iVar10;
        puVar7[3] = local_14;
        puVar7[4] = (char)((ushort)(sVar2 * sVar3) >> 8);
        puVar7[5] = local_10;
        puVar7[6] = uStack_d;
        puVar7[7] = uStack_e;
        puVar9 = puVar7 + 8;
        if (0x1000002 < iVar10) {
          *puVar9 = 0;
          puVar7[9] = 0;
          uStack_7 = (undefined1)((ushort)uVar4 >> 8);
          puVar7[10] = 0;
          puVar7[0xb] = 0;
          puVar7[0xc] = uStack_7;
          local_8 = (undefined1)uVar4;
          puVar7[0xd] = local_8;
          uStack_5 = (undefined1)((ushort)uVar5 >> 8);
          puVar7[0xe] = uStack_5;
          local_6 = (undefined1)uVar5;
          puVar7[0xf] = local_6;
          puVar9 = puVar7 + 0x10;
        }
        *param_3 = (short)puVar9 - (short)puVar7;
        return *(int **)((int)this + 0x18);
      }
      break;
    case 0x13:
      *(int *)((int)this + 0x12) = *(int *)(&DAT_633ab044 + (uint)param_1 * 0x34);
      *param_3 = 4;
      return (int *)((int)this + 0x12);
    case 0x14:
      *(int *)((int)this + 0x12) = *(int *)(&DAT_633ab02c + (uint)param_1 * 0x34);
      *param_3 = 4;
      return (int *)((int)this + 0x12);
    }
  }
  *param_3 = 0;
  return (int *)0x0;
}


