/* Module: vegas30k.dll
   Function: MIDIMixer_AssignClientIDs
   Address: 01180680
   Source: Ghidra pseudocode (Stage 10 batch) */


/* void __stdcall MIDIMixer_AssignClientIDs(struct ISFMixer *) */

void MIDIMixer_AssignClientIDs(ISFMixer *param_1)

{
  int iVar1;
  long lVar2;
  void *_Memory;
  int iVar3;
  int **unaff_EBP;
  int *piVar4;
  int *piStack_58;
  ISFMixer *pIStack_54;
  int *piStack_50;
  ISFMixer *pIStack_4c;
  int **ppiStack_48;
  ISFMixer *pIStack_44;
  int **ppiStack_40;
  int *piStack_3c;
  ISFMixer *pIStack_38;
  int *piStack_34;
  ISFMixer *pIStack_30;
  int *piStack_2c;
  int *piStack_1c;
  int local_18;
  int *piStack_14;
  undefined4 local_8;
  undefined1 auStack_4 [4];
  
                    /* 0x180680  131  ?MIDIMixer_AssignClientIDs@@YGXPAUISFMixer@@@Z */
  piVar4 = (int *)0x0;
  local_8 = 0;
  if (param_1 == (ISFMixer *)0x0) {
    param_1 = DAT_012b09c8;
  }
  piStack_2c = (int *)0x118069f;
  iVar1 = Mixer_IsPlayPrepared();
  if (iVar1 != 0) {
    piStack_2c = (int *)0x11806a8;
    lVar2 = Mixer_Unprepare();
    if (-1 < lVar2) {
      local_8 = 1;
    }
  }
  piStack_2c = &local_18;
  local_18 = 0;
  piStack_34 = (int *)0x11806cb;
  pIStack_30 = param_1;
  (**(code **)(*(int *)param_1 + 0x204))();
  if (unaff_EBP != (int **)0x0) {
    pIStack_38 = (ISFMixer *)auStack_4;
    piStack_34 = (int *)0x0;
    piStack_3c = (int *)0x1;
    pIStack_44 = (ISFMixer *)0x11806e6;
    ppiStack_40 = unaff_EBP;
    iVar1 = (*(code *)(*unaff_EBP)[3])();
    while (iVar1 == 0) {
      pIStack_44 = (ISFMixer *)&piStack_2c;
      pIStack_4c = (ISFMixer *)0x11806fd;
      (**(code **)(*piStack_14 + 0x20))();
      if (piStack_34 == DAT_012b0ad8) {
        piStack_50 = (int *)0x1180714;
        iVar1 = (**(code **)(*piStack_1c + 0x28))();
        if (iVar1 != 0) goto LAB_0118072d;
        pIStack_4c = (ISFMixer *)0x0;
        piStack_50 = (int *)0x0;
        piStack_58 = piStack_1c;
        pIStack_54 = (ISFMixer *)piVar4;
        (**(code **)(*piStack_1c + 0x2c))();
        piVar4 = (int *)((int)piVar4 + 1);
      }
      else {
LAB_0118072d:
        if (piStack_34 == (int *)0x3) {
          piStack_50 = (int *)0x118073e;
          iVar1 = (**(code **)(*piStack_1c + 0x28))();
          if (iVar1 == 0) {
            pIStack_4c = (ISFMixer *)&piStack_2c;
            pIStack_54 = (ISFMixer *)&stack0xffffffdc;
            piStack_50 = (int *)0x0;
            piStack_58 = piStack_1c;
            (**(code **)(*piStack_1c + 0x30))();
            if (piStack_3c == (int *)0x0) {
              _Memory = (void *)0x0;
            }
            else {
              _Memory = calloc(1,(size_t)piStack_3c);
              (**(code **)(*piStack_2c + 0x30))(piStack_2c,&piStack_34,_Memory,&piStack_3c);
            }
            (**(code **)(*piStack_2c + 0x2c))(piStack_2c,piVar4,_Memory,piStack_3c);
            if (_Memory != (void *)0x0) {
              free(_Memory);
            }
            piVar4 = (int *)((int)piVar4 + 1);
            goto LAB_011807b9;
          }
        }
        pIStack_4c = (ISFMixer *)0x0;
        piStack_50 = (int *)0x0;
        pIStack_54 = (ISFMixer *)0xffffffff;
        piStack_58 = piStack_1c;
        (**(code **)(*piStack_1c + 0x2c))();
      }
LAB_011807b9:
      (**(code **)(*piStack_2c + 8))(piStack_2c);
      iVar1 = (**(code **)(*(int *)pIStack_4c + 0xc))(pIStack_4c,1,&pIStack_30,0);
    }
    ppiStack_48 = (int **)0x11807e8;
    pIStack_44 = pIStack_30;
    (**(code **)(*(int *)pIStack_30 + 8))();
  }
  iVar1 = 0;
  piStack_34 = &local_18;
  local_18 = 0;
  piStack_3c = (int *)0x11807fd;
  pIStack_38 = param_1;
  (**(code **)(*(int *)param_1 + 0x208))();
  if (unaff_EBP != (int **)0x0) {
    ppiStack_40 = &piStack_2c;
    piStack_3c = (int *)0x0;
    pIStack_44 = (ISFMixer *)0x1;
    pIStack_4c = (ISFMixer *)0x1180817;
    ppiStack_48 = unaff_EBP;
    iVar3 = (*(code *)(*unaff_EBP)[3])();
    while (iVar3 == 0) {
      pIStack_4c = (ISFMixer *)&piStack_34;
      pIStack_54 = (ISFMixer *)0x118082a;
      piStack_50 = piStack_3c;
      (**(code **)(*piStack_3c + 0x1c))();
      if (piStack_3c == DAT_012b0ad8) {
        pIStack_54 = pIStack_44;
        piStack_58 = (int *)0x1180842;
        iVar3 = (**(code **)(*(int *)pIStack_44 + 0x24))();
        if (iVar3 != 0) goto LAB_01180858;
        pIStack_54 = (ISFMixer *)0x0;
        piStack_58 = (int *)0x0;
        (**(code **)(*(int *)pIStack_44 + 0x28))(pIStack_44,iVar1);
        iVar1 = iVar1 + 1;
      }
      else {
LAB_01180858:
        pIStack_54 = (ISFMixer *)0x0;
        piStack_58 = (int *)0x0;
        (**(code **)(*(int *)pIStack_44 + 0x28))(pIStack_44,0xffffffff);
      }
      (**(code **)(*(int *)pIStack_54 + 8))(pIStack_54);
      iVar3 = (*(code *)(*(int **)pIStack_4c)[3])(pIStack_4c,1,&piStack_58,0);
    }
    piStack_50 = (int *)0x1180893;
    pIStack_4c = pIStack_30;
    (**(code **)(*(int *)pIStack_30 + 8))();
  }
  if (local_18 != 0) {
    pIStack_30 = (ISFMixer *)0x11808a3;
    Mixer_Prepare();
  }
  return;
}


