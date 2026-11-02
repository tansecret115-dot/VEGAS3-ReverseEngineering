/* Module: vidcap30.exe
   Function: _Internet_SendFeedback@8
   Address: 004a3a70
   Source: Ghidra pseudocode (Stage 10 batch) */


void _Internet_SendFeedback_8(undefined4 param_1,undefined4 param_2)

{
                    /* 0xa3a70  177  _Internet_SendFeedback@8 */
  _Internet_SendMail_16
            (param_1,param_2,s_SMTP_feedback_sonicfoundry_com_005b740c,
             s_SMTP_feedback_sonicfoundry_com_005b740c);
  return;
}


