/* Module: vegas30k.dll
   Function: FUN_010248c0
   Address: 010248c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_010248c0(int *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  HRESULT HVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  bool bVar9;
  bool bVar10;
  int local_15c;
  int local_154;
  int *local_150;
  int *local_14c;
  int *local_148;
  int iStack_144;
  int aiStack_140 [4];
  int local_130 [4];
  int local_120;
  CHAR local_108 [259];
  undefined1 local_5;
  
  local_14c = (int *)0x0;
  local_150 = (int *)0x0;
  bVar9 = false;
  local_148 = (int *)0x0;
  *param_1 = 0;
  iVar1 = _SfVideoPlugin_CreateInstance_4(&local_150);
  if (iVar1 < 0) {
    if (*param_1 != 0) {
      _SfList_Destroy_4(*param_1);
      *param_1 = 0;
    }
  }
  else {
    iVar1 = _SfList_CreateExZ_32(param_1,0x130,0xffffffff,0xffffffff,0x40000004,0,0,0);
    if (iVar1 < 0) {
      return iVar1;
    }
    iVar2 = FUN_01023b50();
    if (iVar2 != 0) {
      if (DAT_012099dc == (int *)0x0) {
        local_15c = 0;
      }
      else {
        local_15c = *DAT_012099dc;
      }
      local_154 = 0;
      piVar5 = DAT_012099dc;
      if (0 < local_15c) {
        do {
          piVar6 = (int *)(piVar5[1] * local_154 + piVar5[2]);
          piVar7 = local_130;
          for (iVar2 = 0x4c; iVar2 != 0; iVar2 = iVar2 + -1) {
            *piVar7 = 0;
            piVar7 = piVar7 + 1;
          }
          local_130[0] = *piVar6;
          local_130[1] = piVar6[1];
          local_130[2] = piVar6[2];
          iVar2 = 4;
          local_130[3] = piVar6[3];
          bVar9 = true;
          piVar7 = piVar6 + 4;
          piVar8 = param_2;
          do {
            if (iVar2 == 0) break;
            iVar2 = iVar2 + -1;
            bVar9 = *piVar7 == *piVar8;
            piVar7 = piVar7 + 1;
            piVar8 = piVar8 + 1;
          } while (bVar9);
          if ((bVar9) &&
             (FUN_01024440(piVar6,local_150,local_130,param_3), piVar5 = DAT_012099dc,
             local_120 != 0)) {
            lstrcpynA(local_108,(LPCSTR)(piVar6 + 8),0x104);
            local_5 = 0;
            _SfList_InsertList_16(*param_1,0xffffffff,local_130,1);
            piVar5 = DAT_012099dc;
          }
          local_154 = local_154 + 1;
        } while (local_154 < local_15c);
      }
      bVar9 = true;
      if (DAT_012099e4 != 0) goto LAB_01024b68;
    }
    HVar3 = CoCreateInstance((IID *)&DAT_011f0e60,(LPUNKNOWN)0x0,7,(IID *)&DAT_011f0e70,&local_14c);
    if ((HVar3 < 0) ||
       (iVar1 = (**(code **)(*local_14c + 0x14))(local_14c,1,param_2,0,0,&local_148), iVar1 < 0)) {
      iVar1 = 0;
    }
    else {
      do {
        (**(code **)(*local_148 + 0xc))(local_148,1,aiStack_140,&iStack_144);
        if (iStack_144 == 0) break;
        if (bVar9) {
          piVar5 = (int *)*param_1;
          iVar2 = 0;
          if (0 < *piVar5) {
            do {
              iVar4 = 4;
              bVar10 = true;
              piVar7 = (int *)(piVar5[1] * iVar2 + piVar5[2]);
              piVar6 = aiStack_140;
              do {
                if (iVar4 == 0) break;
                iVar4 = iVar4 + -1;
                bVar10 = *piVar7 == *piVar6;
                piVar7 = piVar7 + 1;
                piVar6 = piVar6 + 1;
              } while (bVar10);
              if (bVar10) goto LAB_01024b48;
              iVar2 = iVar2 + 1;
            } while (iVar2 < *piVar5);
          }
        }
        piVar5 = local_130;
        for (iVar2 = 0x4c; iVar2 != 0; iVar2 = iVar2 + -1) {
          *piVar5 = 0;
          piVar5 = piVar5 + 1;
        }
        local_130[0] = aiStack_140[0];
        local_130[1] = aiStack_140[1];
        local_130[2] = aiStack_140[2];
        local_130[3] = aiStack_140[3];
        FUN_01024440(aiStack_140,local_150,local_130,param_3);
        if (local_120 != 0) {
          FUN_01024110(local_108,0x104,aiStack_140);
          _SfList_InsertList_16(*param_1,0xffffffff,local_130,1);
        }
LAB_01024b48:
      } while (iStack_144 != 0);
    }
  }
LAB_01024b68:
  if (local_150 != (int *)0x0) {
    (**(code **)(*local_150 + 8))(local_150);
  }
  if (local_14c != (int *)0x0) {
    (**(code **)(*local_14c + 8))(local_14c);
  }
  if (local_148 != (int *)0x0) {
    (**(code **)(*local_148 + 8))(local_148);
  }
  return iVar1;
}


