/* Module: pngu3266.dll
   Function: OnMouseMove
   Address: 6061761a
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: void __thiscall CPNScrollHelper::OnMouseMove(class CPNxPoint &) */

void __thiscall CPNScrollHelper::OnMouseMove(CPNScrollHelper *this,CPNxPoint *param_1)

{
  int iVar1;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
                    /* 0x2761a  1648  ?OnMouseMove@CPNScrollHelper@@IAEXAAVCPNxPoint@@@Z */
  iVar1 = *(int *)(this + 0x2c);
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_c = 0;
  local_8 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  if (*(int *)(*(int *)(this + 8) + 0xc4) != 0) {
    CPNSystemInfo::GetCursorPosition((CPNxPoint *)&local_c);
    (**(code **)(**(int **)(this + 8) + 0x68))(&local_c);
    (**(code **)(**(int **)(this + 8) + 0x3c))(&local_2c);
    GetArrowRect(this,(CPNxRect *)&local_2c,*(ulong *)(this + 0x38),4,(CPNxRect *)&local_1c);
    if ((((local_1c < local_14) && (local_18 < local_10)) && (local_1c <= local_c)) &&
       (((local_c <= local_14 && (local_18 <= local_8)) && (local_8 <= local_10)))) {
      *(undefined4 *)(this + 0x2c) = 1;
    }
    else {
      *(undefined4 *)(this + 0x2c) = 0;
    }
    if (iVar1 != *(int *)(this + 0x2c)) {
      (**(code **)(**(int **)(this + 8) + 0x78))(0,1);
    }
  }
  return;
}


