# Archive

In this archive directory, we are storing discontinued airflow jobs only. For each job, keep Dag and its configuration file in the below-mentioned directories.
 
## dags/itm: 

This directory stores the DAG files.

## dags/itm/yamlfiles: 

This directory stores the configuration files (yaml) of the respective DAG files.

## Process of archiving jobs

1. If you haven't already, clone the repository to your local system.
2. Navigate to the archive diectory.
3. Go to the dags/itm/ directory on your local machine first, then create or paste the Python (DAG) file to create a DAG of a job that has been discontinued. 
4. Go to the dags/itm/yamlfiles directory on your local system and create a yaml file here for the previously created DAG.
5. After creating the DAG and Yaml, promote the files.

## How to delete the Airflow jobs

To remove the jobs, Login to the airflow server and click on the delete DAG button under the Actions Component tab. (Make sure DAG is paused)
